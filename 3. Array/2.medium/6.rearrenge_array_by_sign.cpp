There’s an array ‘A’ of size ‘N’ with an equal number of positive and
 negative elements. Without altering the relative order of positive and
  negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.

// Example 1:

// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5

// Explanation: 

// Positive elements = 1,2
// Negative elements = -4,-5
// To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

// Example 2:
// Input:
// arr[] = {1,2,-3,-1,-2,-3}, N = 6
// Output:
// 1 -3 2 -1 3 -2
// Explanation: 

// Positive elements = 1,2,3
// Negative elements = -3,-1,-2
// To maintain relative ordering, 1 must occur before 2, and 2 must occur before 3.
// Also, -3 should come before -1, and -1 should come before -2.


vector<int> alternateNumbers(vector<int> &a) {
  vector<int> positive;
  vector<int> negetive;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] < 0)
      negetive.push_back(a[i]);

    else
      positive.push_back(a[i]);
  }

  for (int i = 0; i < a.size()/2; i++) {

    a[2 * i] = positive[i];
    a[2 * i + 1] = negetive[i];
  }


return a;
}

//? Time Complexity: O(N+N/2) { O(N) for traversing the array once for segregating positives and negatives
//?  and another O(N/2) for adding those elements alternatively to the array, where N = size of the array A}.

//? Space Complexity:  O(N/2 + N/2) = O(N) { N/2 space required for each of the positive and negative
//?  element arrays, where N = size of the array A}.