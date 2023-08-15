// Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.


// Example:
// 'arr '= [1,2,3,4,5]
// 'k' = 1  rotated array = [2,3,4,5,1]
// 'k' = 2  rotated array = [3,4,5,1,2]
// 'k' = 3  rotated array = [4,5,1,2,3] and so on.
// Detailed explanation ( Input/output format, Notes, Images )
// keyboard_arrow_down
// Sample Input 1:
// 8
// 7 5 2 11 2 43 1 1
// 2
// Sample Output 1:
// 2 11 2 43 1 1 7 5


// mySolution

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {

vector<int> ans;
int temp=arr[0];
  for(int i=1;i<n;i++){
      ans.push_back(arr[i]);
  }
  ans.push_back(temp);
    return ans;
    // Write your code here.
}
