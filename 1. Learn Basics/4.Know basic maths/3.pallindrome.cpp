// Check whether a given number ’n’ is a palindrome number.
// Palindrome numbers are the numbers that don't change when reversed.
// Return boolean value true or false.

bool palindrome(int n)
{
    int ans=0;int copy_of_n=n;
    while(n!=0){

    int a;a=n%10;
    n=n/10;
    ans=(ans*10)+a;
    }
    if(ans==copy_of_n){return true;}
    else{return false;}


    // Write your code here
}
