// You are given a number ’n’.


// Find the number of digits of ‘n’ that evenly divide ‘n’.


// Note:
// A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.


// Example:
// Input: ‘n’ = 336

// Output: 3

// Explanation:
// 336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.



int countDigits(int n) {
  int ans = 0;
  int copy_of_n = n;
  int cheak = 0;

  while (n != 0) {
    cheak = n % 10;
// ** the corner case is that cheak!=0 in the conditional because we cant take someones modulo to 0
    if (cheak != 0 && copy_of_n % cheak == 0) {
      ans++;
    }
    n = n / 10;
  }

  return ans;
}

