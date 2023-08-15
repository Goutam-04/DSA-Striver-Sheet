// Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.

// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.

// Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

// Example:
// Input: ‘n’ = 5 ‘m’ = 3
// ‘a’ = [1, 2, 3, 4, 6]
// ‘b’ = [2, 3, 5]

// Output: [1, 2, 3, 4, 5, 6]

// Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
// Distinct elements in ‘a’ are: [1, 4, 6]
// Distinct elements in ‘b’ are: [5]
// Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]


// my solution
vector < int > sortedArray(vector < int > a, vector < int > b) {

    vector<int>temp;
    for(int i=0;i<a.size();i++){
       temp.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++){
       temp.push_back(b[i]);
    }
    sort(temp.begin(),temp.end());
    vector<int>ans;
    for(int i=0;i<temp.size();i++){
        if(temp[i]!=temp[i+1]){ans.push_back(temp[i]);}
    }
    return ans;
    // Write your code here
}

// using set and optimal

/*
    Time Complexity: O((N + M) * log(N + M))
    Space Complexity: O(N + M)

    N and M are the sizes of array 'a' and 'b' respectively.
*/
#include <set>
vector<int> sortedArray(vector<int> a, vector<int> b)
{

    int n = a.size(), m = b.size();
    // Using a min-heap to
    // store all distinct elements
    set<int> st;

    // Iterating over 'a'
    for (int i = 0; i < n; ++i)
    {
        st.insert(a[i]);
    }

    // Iterating over 'b'
    for (int i = 0; i < m; ++i)
    {
        st.insert(b[i]);
    }

    vector<int> unionArray;

    // Copying all elements
    // from the set to the vector
    for (const int &value : st)
    {
        unionArray.push_back(value);
    }

    return unionArray;
}

// approach 2
/*
    Time Complexity: O((N + M))
    Space Complexity: O(N + M)

    N and M are the sizes of array 'A' and 'B' respectively.
*/
vector<int> sortedArray(vector<int> a, vector<int> b)
{

    int n = a.size(), m = b.size();
    // Dynamic Array to store the union of 'a' and 'b'
    vector<int> unionArray;

    int i = 0, j = 0;
    // Iterating over both arrays
    while (i < n && j < m)
    {

        // Current element in a is smaller or
        // equal to the current element in b
        if (a[i] <= b[j])
        {

            // Checking whether same element
            // exists in the 'unionArray' or not.
            if (unionArray.size() == 0 ||
                unionArray.back() != a[i])
            {
                unionArray.push_back(a[i]);
            }

            // Incrementing i
            ++i;
        }
        else
        {
            // A[i] > B[j]
            if (unionArray.size() == 0 ||
                unionArray.back() != b[j])
            {
                unionArray.push_back(b[j]);
            }

            // Incrementing j
            ++j;
        }
    }

    // Traversing over 'a' to insert
    // elements which are left
    while (i < n)
    {
        if (unionArray.back() != a[i])
        {
            unionArray.push_back(a[i]);
        }

        // Incrementing i
        ++i;
    }

    // Traverse over 'b' to insert
    // elements which are left
    while (j < m)
    {
        if (unionArray.back() != b[j])
        {
            unionArray.push_back(b[j]);
        }

        // Incrementing j
        ++j;
    }

    return unionArray;
}