// A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.


// You are given a number 'n'.


// Find out whether 'n' is prime or not.

bool isPrime(int n)
{
	if(n==1)return false;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
