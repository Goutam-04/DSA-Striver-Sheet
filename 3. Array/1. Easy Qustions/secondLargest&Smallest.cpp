// Ninja is a brilliant student in the class, and hence his teacher assigned him a problem.


// He has been given an array ‘a’ of ‘n’ unique non-negative integers and has been asked to find the second largest and second smallest element from the array.


// Your task is to return two elements (second largest and second smallest) as another array of size 2.


// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: [4, 2]

// The second largest element after 5 is 4, and the second smallest element after 1 is 2.


vector<int> getSecondOrderElements(int n, vector<int> a) {

    vector<int> arr;
    sort(a.begin(),a.end());
    arr.push_back(a[(a.size()-2)]);
    arr.push_back(a[1]);
    return arr;

    // Write your code here.
}