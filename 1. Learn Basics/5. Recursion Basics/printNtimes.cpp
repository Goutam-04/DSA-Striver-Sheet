// You are given an integer ‘n’.


// Return an array having “Coding Ninjas” ‘n’ times, without using a loop.


// Example:
// Input: ‘n’  = 4

// Output:
// Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 

// Explanation: “Coding Ninjas” is printed 4 times. 

void recursiveFunction(int n, vector<string> &ans) {
  if (n == 0) { // Base case
    return;
  }
  ans.push_back("Coding Ninjas");
  recursiveFunction(n - 1, ans);
}

vector<string> printNTimes(int n) {
  vector<string> ans;
  recursiveFunction(n, ans);
  return ans;
}
