// Given an array ‘arr’ of size ‘n’ find the largest element in the array.


// Example:
// Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]

// Output: 5

// Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int ans=arr[0];
    for(int i=0;i<arr.size();i++){
        if(ans<arr[i]){ans=arr[i];}
    }
    return ans;
    // Write your code here.
}