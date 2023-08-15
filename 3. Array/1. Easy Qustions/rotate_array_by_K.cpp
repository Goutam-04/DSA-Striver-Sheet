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

vector<int> rotateArray(vector<int>arr, int k) {

    int temp[k];
    vector<int> ans;
    for(int i=0;i<k;i++){temp[i]=arr[i];}
    for(int i=k;i<arr.size();i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){ans.push_back(temp[i]);}

    return ans;
    // Write your code here.
}


// approach 1
/*
    Time Complexity: O(n*k)
    Space Complexity: O(1)
    where n is the size of the input array.
*/

vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];

        arr[n - 1] = temp;
    }

    return arr;
}


// approach 2

/*
    Time complexity: O( N )
    Space complexity: O( N )

    Where 'N' is the size of array.
*/

vector < int > rotateArray(vector < int > & arr, int k) {

    int n = arr.size();
    // Create a 'rotatedArr' of size 'n'.
    vector < int > rotatedArr(n);

    // Now store ith value (0 <= i <= n-1) of 'arr' at ((i - k + n)%n)th position in 'rotatedArr'.
    for (int i = 0; i < n; i++) {
        rotatedArr[(i - k + n)%n] = arr[i];
    }
    // Return the rotatedArr.
    return rotatedArr;
}