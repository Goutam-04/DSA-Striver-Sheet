// Given an array 'arr' of size 'n'.


// Return an array with all the elements placed in reverse order.


// Note:
// You don’t need to print anything. Just implement the given function.
// Example:
// Input: n = 6, arr = [5, 7, 8, 1, 6, 3]

// Output: [3, 6, 1, 8, 7, 5]

// Explanation: After reversing the array, it looks like this [3, 6, 1, 8, 7, 5].


// using for loop

/*
    Time Complexity: O(n)
    Space Complexity: O(n)
    where n is the size of the input array.
*/

// Function to reverse the elements of the given array 'nums'.
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Create a new vector to store the reversed elements.
    vector<int> reversedArray(n);

    // Traverse the original array in reverse order and store the elements in the new array.
    for (int i = n - 1; i >= 0; i--)
    {
        reversedArray[n - i - 1] = nums[i];
    }

    // Returning the reversed array.
    return reversedArray;
}


// using while loop

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
    where n is the size of the input array.
*/

// Function to reverse the elements of the given array 'arr'.
vector<int> reverseArray(int n, vector<int> &nums)
{
    // Initialize two pointers, left and right,
    // pointing to the first and last indices of the array, respectively.
    int left = 0, right = n - 1;

    // Iterate until left crosses right.
    while (left < right)
    {
        // Swap the elements at positions left and right.
        swap(nums[left], nums[right]);

        // Move left one step forward.
        left++;

        // Move right one step backward.
        right--;
    }

    // Returning the reversed array.
    return nums;
}


// using revesere function

/*
    Time Complexity : O(n)
    Space Complexity : O(1)
    where n is size of input array
*/

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Reverse the elements in the vector using the reverse function.
    // The reverse function takes two iterators representing the range of elements to be reversed.
    reverse(nums.begin(), nums.end());
    // In this case, nums.begin() represents the iterator pointing to the first element of the vector.
    // nums.end() represents the iterator pointing to the element just past the end of the vector.

    // Return the reversed vector.
    return nums;
}
