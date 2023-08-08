// The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
//     F(n) = F(n - 1) + F(n - 2), 
//     Where, F(1) = 1, F(2) = 1


// Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.


// Example :
// Input: 6

// Output: 8

// Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.
// So by using the given formula of the Fibonacci series, we get the series:    
// [ 1, 1, 2, 3, 5, 8, 13, 21]
// So the “6th” element is “8” hence we get the output.


// approach-1
/*
    Time complexity: O(2^N)
    Space complexity: O(N) 

    Where 'N' reprents the "Nth" number .
*/

#include<bits/stdc++.h>
using namespace std;

int recur(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recur(n - 1) + recur(n - 2);
}

int main()
{
    int n;
    cin>>n;
    
    cout<<recur(n)<<endl;
}

// approach-2
/*
    Time complexity: O(N)
    Space complexity: O(N) 

    Where 'N' reprents the "Nth" number .
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // declaring an 'n' size array.
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[n]<<endl;
}

// approach-3
/*
    Time complexity: O(N)
    Space complexity: O(1) 

    Where 1 represents the constant and 'N' reprents the "Nth" number .
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i < n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    cout<<a<<endl;
}