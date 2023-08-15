// You are given a sorted integer array 'arr' of size 'n'. You need to remove the duplicates from the array such that each element appears only once. Return the length of this new array.


// Note:
// Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 


// For Example:
// 'n' = 5, 'arr' = [1 2 2 2 3].
// The new array will be [1 2 3].
// So our answer is 3.

// my solution
int removeDuplicates(vector<int> &arr, int n) {
	int ans=0;
	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]==arr[i+1]) ans++;
	}
	return arr.size()-ans;
	// Write your code here.
}

// optimala solution

