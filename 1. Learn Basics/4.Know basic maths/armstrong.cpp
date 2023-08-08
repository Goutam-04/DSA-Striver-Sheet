// You are given an integer 'n'.


// Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.


// Note:
// An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.



bool checkArmstrong(int n) {
  
  int copy_of_n = n;

//   use this step for best TC
int a=(int)log10(n)+1;


  n = copy_of_n;
  int sum = 0;
  while (n != 0) {
    int j = n % 10;
    sum = sum + pow(j,a);
    n=n/10;
  }

  if(sum==copy_of_n)return true;
  else return false;
}

// Write your code here

