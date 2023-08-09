// Problem Statement
// Suggest Edit
// You are given an integer ‘n’.


// Your task is to return an array containing integers from ‘1’ to ‘n’ (in increasing order) without using loops.


// Note:
// In the output, you will see the array returned by you.
// Example:
// Input: ‘n’ = 5

// Output: 1 2 3 4 5

// Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].


// optimal solution
/*
    Time Complexity: O( n ) 
    Space Complexity: O( n )
    
    where n is the integer.
*/

void recursiveFunction(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
    
    // Insert element in the array
    ans.push_back(x);
}

vector<int> printNos(int x) {
    // Declaring empty integer array
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}

// my solution

vector<int> printNos(int x) {
   vector<int> arr;
   
if(x>1)
    arr=printNos( x-1);
    arr.push_back(x);
    return arr;
}