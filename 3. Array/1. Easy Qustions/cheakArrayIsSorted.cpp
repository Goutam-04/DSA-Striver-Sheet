// Ninja is a brilliant student in the class, and hence his teacher assigned him a problem.


// He has been given an array ‘a’ of ‘n’ non-negative integers and has been asked to check whether the given array is sorted in the non-decreasing order or not.


// Your task is to return 1 if the given array is sorted. Else, return 0.


// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: 1

// The given array is sorted in non-decreasing order; hence the answer will be 1.


// my approach

int isSorted(int n, vector<int> a) {
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(a[i]);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]!=a[i])return 0;
    }
    return 1;
    // Write your code here.
}


// optimal approach
/*
    Time complexity: O(N)
    Space complexity: O(1)

    Where 'N' is the input array 'A'.
*/

int isSorted(int n, vector<int> a) {
    // Iterating over the array 'A'.
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] < a[i]) {
            return 0;
        }
    }

    return 1;
}


