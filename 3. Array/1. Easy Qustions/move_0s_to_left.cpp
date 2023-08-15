// Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.


// Example :
// Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
// Output: [1, 2, 2, 3, 0, 0]

// Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.

// my approach and optimal also

vector<int> moveZeros(int n, vector<int> a) {

    vector<int> ans;int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){ans.push_back(a[i]);}
        else{count++;}
    }
    for(int i=0;i<count;i++){
        ans.push_back(0);
    }

    return ans;
    // Write your code here.
}


