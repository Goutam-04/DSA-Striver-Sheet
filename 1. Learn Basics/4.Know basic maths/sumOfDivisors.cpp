// You are given an integer ‘n’.


// Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.


// Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.


// Example:
// Input: ‘n’  = 5

// Output: 21

// Explanation:
// We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
// ‘sumOfDivisors(1)’ = 1
// ‘sumOfDivisors(2)’ = 2 + 1 = 3
// ‘sumOfDivisors(3)’ = 3 + 1 = 4
// ‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
// ‘sumOfDivisors(5)’ = 5 + 1 = 6
// Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.

answer

/*
    Time Complexity: O(n)

    Space Complexity: O(1)

    Where 'n' is the given integer.
*/

int sumOfAllDivisors(int n)
{
    int ans = 0;

    // Iterating over all 'i'. Each 'i' contributes to final answer
    // exactly 'floor(n/i)' times.
    for (int i = 1; i <= n; i++)
    {
        ans += i * (n / i);
    }

    return ans;
}



// approach -2


/*
    Time Complexity: O(sqrt(n))

    Space Complexity: O(1)

    Where 'n' is the given integer.
*/

int sumOfAllDivisors(int n)
{
    int ans = 0;
    int l = 1;

    // Iterating over all values of 'l' such that 'n/l' is distinct.
    // There at most 2*sqrt(n) such values.
    while (l <= n)
    {
        int val = n / l;

        // 'r' = maximum value of 'i' such that 'n/i' is val.
        int r = n / val;

        ans += ((r * (r + 1)) / 2 - (l * (l - 1)) / 2) * val;

        // moving on to next range.
        l = r + 1;
    }

    return ans;
}