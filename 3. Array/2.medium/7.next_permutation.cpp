// Problem Statement:
//  Given an array Arr[] of integers, rearrange the numbers of the given array into 
// the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

// Examples
// Example 1 :

// Input format: Arr[] = {1,3,2}
// Output: Arr[] = {2,1,3}
// Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. 
// So, the next permutation just after {1,3,2} is {2,1,3}.

-----------------------------------------------------------------------------------

//*Brute force approach onlly

Approach :

Step 1: Find all possible permutations of elements present and store them.

Step 2: Search input from all possible permutations.

Step 3: Print the next permutation present right after it.

For reference of how to find all possible permutations,
 follow up https://www.youtube.com/watch?v=f2ic2Rsc9pU&t=32s. This video shows for distinct elements but code works for duplicates too.

Complexity Analysis
For finding, all possible permutations, it is taking N!xN. N represents the number of elements present in the input array. 
Also for searching input arrays from all possible permutations will take N!. Therefore, it has a Time complexity of O(N!xN).

Space Complexity :

Since we are not using any extra spaces except stack spaces for recursion calls. So, it has a space complexity of O(1).

--------------------------------------------------------
//*STL code but not the best solution (IMPORTANT)

 next_permutation(arr,arr+3);
---------------------------------------------------------

//*OPTIMAL Solution

Algorithm / Intuition
// The steps are the following:

// Find the break-point, i: Break-point means the first index i from the back of the given array where arr[i] becomes smaller than arr[i+1].
// For example, if the given array is {2,1,5,4,3,0,0}, the break-point will be index 1(0-based indexing). Here from the back of the array, 
// index 1 is the first index where arr[1] i.e. 1 is smaller than arr[i+1] i.e. 5.
// To find the break-point, using a loop we will traverse the array backward and store the index i where arr[i] is less 
// than the value at index (i+1) i.e. arr[i+1].
// If such a break-point does not exist i.e. if the array is sorted in decreasing order, the given permutation is the 
// last one in the sorted order of all possible permutations. So, the next permutation must be the first i.e. the permutation in increasing order.
// So, in this case, we will reverse the whole array and will return it as our answer.
// If a break-point exists:
// Find the smallest number i.e. > arr[i] and in the right half of index i(i.e. from index i+1 to n-1) and swap it with arr[i].
// Reverse the entire right half(i.e. from index i+1 to n-1) of index i. And finally, return the array.

*********************************************************

vector<int> nextGreaterPermutation(vector<int> &A) {
    int n = A.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return A;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());

    return A;
}

// Time Complexity: O(3N), where N = size of the given array
// Finding the break-point, finding the next greater element, and reversal at the end takes O(N) for each,
//  where N is the number of elements in the input array. This sums up to 3*O(N) which is approximately O(3N).

// Space Complexity: Since no extra storage is required. Thus, its space complexity is O(1).