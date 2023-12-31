Optimal Approach: Moore’s Voting Algorithm:
Intuition:
If the array contains a majority element, its occurrence must be greater than the floor(N/2). Now, we can say that the count of 
minority elements and majority elements is equal up to a certain point in the array. So when we traverse through the array we try to 
keep track of the count of elements and the element itself for which we are tracking the count. 


After traversing the whole array, we will check the element stored in the variable. If the question states that the array must contain 
a majority element, the stored element will be that one but if the question does not state so, then we need to check if the stored 
element is the majority element or not. If not, then the array does not contain any majority element.


// ?optimal Approach: *******************************************************************************************************

Initialize 2 variables:
Count –  for tracking the count of element

Element – for which element we are counting
Traverse through the given array.

If Count is 0 then store the current element of the array as Element.

If the current element and Element are the same increase the Count by 1.

If they are different decrease the Count by 1.

The integer present in Element should be the result we are expecting 
Dry Run:

The yellow-colored element represents the current element.





Basically, we are trying to keep track of the occurrences of the majority element and minority elements dynamically. That is why, in 
iteration 4, the count becomes 0 as the occurrence of Element and the occurrence of the other elements are the same. So, they canceled 
each other. This is how the process works. The element with the most occurrence will remain and the rest will cancel themselves.


Here, we can see that 2 is the majority element. But if in this array, the last two elements were 3, then the Element variable would 
have stored 3 instead of 2. For that, we need to check if the Element is the majority element by traversing the array once more. But if
 the question guarantees that the given array contains a majority element, then we can bet the Element will store the majority one.








#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


Time Complexity: O(N) + O(N), where N = size of the given array.
Reason: The first O(N) is to calculate the count and find the expected majority element. 
The second one is to check if the expected element is the majority one or not.

Note: If the question states that the array must contain a majority element, 
in that case, we do not need the second check. Then the time complexity will boil down to O(N).

Space Complexity: O(1) as we are not using any extra space.



//? another appproaches*****************************************************************************************************




#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();

    //declaring a map:
    map<int, int> mpp;

    //storing the elements with its occurnce:
    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    //searching for the majority element:
    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

// ?brute force approach**************************************************************************************************************




#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();

    for (int i = 0; i < n; i++) {
        //selected element is v[i]
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            // counting the frequency of v[i]
            if (v[j] == v[i]) {
                cnt++;
            }
        }

        // check if frquency is greater than n/2:
        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

