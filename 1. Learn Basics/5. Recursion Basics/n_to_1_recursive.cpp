// You are given an integer ‘n’.


// Your task is to return an array containing integers from ‘n’ to ‘1’ (in decreasing order) without using loops.


// Note:
// In the output, you will see the array returned by you.
// Example:
// Input: ‘n’ = 5

// Output: 5 4 3 2 1

// Explanation: An array containing integers from ‘n’ to ‘1’ is [5, 4, 3, 2, 1].


/*
    Time Complexity: O( n ) 
    Space Complexity: O( n )
    
    where n is the integer.
*/
// the call by refereece is importaant remember
void recursiveFunction(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    // Insert element in the array
    ans.push_back(x);
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
}

vector<int> printNos(int x) {
    // Declaring empty integer array
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}