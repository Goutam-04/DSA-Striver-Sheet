// You are given two integers 'n', and 'm'.


// Calculate 'gcd(n,m)', without using library functions.


// Note:
// The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.


// Example:
// Input: 'n' = 6, 'm' = 4

// Output: 2

// Explanation:
// Here, gcd(4,6) = 2, because 2 is the largest positive integer that divides both 4 and 6.



// **Brute Force approach
/*
    Time Complexity: O(a)

    Space Complexity: O(1)

    Where 'a' is minimum of 'n' and 'm'.
*/

int calcGCD(int n, int m)
{
    int ans = 1;

    // Iterating through all integers from 1 to min(n,m) and 
    // finding the greatest integer that divides both 'n' and 'm'.
    for (int i = 1; i <= min(n, m); i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

//** Eucledian and optimal solution

/*
    Time Complexity: O(log(a))

    Space Complexity: O(1)

    Where 'a' is minimum of 'n' and 'm'.
*/

int calcGCD(int n, int m)
{
    if (m > n)
    {
        swap(n, m);
    }

    // Base case of gcd(n,0) = n.
    if (m == 0)
    {
        return n;
    }

    // Using Euclidean Theorem.
    return calcGCD(m, n % m);
}

//  ? its theory is 

// Approach:

// If a number divides both ‘n’ and ‘m’, it must also divide ‘n-m’ and by extension ‘n mod m’. We can use this fact to make the following recursive relation, and base case:

// gcd(n,m) = gcd(m,n%m)
// When m == 0, return n because gcd(n,0) = n
// The steps are as follows:

// function calcGCD(int n,int m)

// if (n<m)
// swap(n,m)
// if(m == 0)
// return a
// return calcGCD(m,n%m)
// Time Complexity
// O(log(min(n,m)), where ‘n’ and ‘m’ are the given number.



// The running time of the algorithm is estimated by Lamé's theorem, which establishes a surprising connection between the Euclidean algorithm and the Fibonacci sequence. 


// If  n > m >= 1  and  b < Fk  for some  k , where Fk is the kth term in the Fibonacci sequence, the Euclidean algorithm performs at most  k-2  recursive calls. 


// Since, Fibonacci numbers grow exponentially, we get that the Euclidean algorithm works in  O(log(min(a, b))) .


// Hence, the time complexity is O(log(min(n,m)).

// Space Complexity
// O(1).


// We are using constant extra space (ignoring the recursive stack space).

// Hence, the space complexity is O(1).