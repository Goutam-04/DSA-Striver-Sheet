// ? KANDANE ALGORITHAM

Using basic implementation, let’s check for all subarrays to find the maximum sum among them.
Input: 'arr' = [1, 2, 7, -4, 3, 2, -10, 9, 1]

Output: 11

Explanation: The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].


//* the algorithm*****************************************************

long long maxSubarraySum(vector<int> arr, int n)
{
    int element=arr[0];
    long long sum=0;
    long long maxi=INT_MIN,mini=INT_MIN;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<=0){sum=0;}
        maxi=max(sum,maxi);
    }

return maxi;
}

//!other approaches**********************************************************

/*
    Time Complexity: O(N^3)
    Space Complexity: O(1)

    where N is the length of the array.
*/

long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxSum = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            long long curSum = 0;
            
            for(int k=i; k<=j; k++)
            {
                curSum += arr[k];
            }

            maxSum = max(maxSum, curSum);
        }
    }
    return maxSum;
}
//!other approaches**********************************************************
/*
    Time Complexity: O(N^2)
    Space Complexity: O(1)

    where N is the length of the array.
*/

long long maxSubarraySum(vector<int> arr, int n)
{
    long long maxSum = 0;

    for(int i=0; i<n; i++)
    {
        long long curSum = 0;

        for(int j=i; j<n; j++)
        {
            curSum += arr[j];
            maxSum = max(maxSum, curSum);
        }
    }

    return maxSum;
}
//!other approaches**********************************************************
/*  
    Time Complexity : O(N * log(N))
    Space Complexity : O(N)

    Where N is the length of array.
*/


long crossSum(vector<int> &arr, int low, int high, int mid) {

    if (low == high) {
        return arr[low];
    }

    long leftSubsum = 0;
    long currSum = 0;

    // maximum subarray sum by including elements on left of mid.
    for (int i = mid; i > low - 1; --i) {

        currSum += arr[i];
        leftSubsum = max(leftSubsum, currSum);

    }

    long rightSubsum = 0;
    currSum = 0;

    // maximum subarray sum by include elements on right of mid.
    for (int i = mid + 1; i < high + 1; ++i) {

        currSum += arr[i];
        rightSubsum = max(rightSubsum, currSum);

    }

    return leftSubsum + rightSubsum;
}

long maxSubarraySumHelper(vector<int> &arr, int low, int high) {
    // if there is only one element.
    if (low == high) {
        return arr[low];
    }

    int mid = (low + high) / 2;

    // left maximum subarray sum
    long leftSum = maxSubarraySumHelper(arr, low, mid);

    // right maximum subarray sum
    long rightSum = maxSubarraySumHelper(arr, mid + 1, high);

    // Maximum subarray sum such that the subarray crosses the midpoint.
    long crossS = crossSum(arr, low, high, mid);

    return max(max(leftSum, rightSum), crossS);
}


long long maxSubarraySum(vector<int> arr, int n)
{
    return maxSubarraySumHelper(arr, 0, n - 1);
}
//!other approaches**********************************************************
/*
    Time Complexity: O(N)
    Space Complexity: O(N)

    where N is the length of the array.
*/

long long maxSubarraySum(vector<int> arr, int n)
{
    long long curSum[n];
    long long maxSum = 0;

    for(int i=0; i<n; i++)
    {
        if(i == 0)
        {
            curSum[i] = max(0, arr[i]);
        }
        else
        {
            curSum[i] = max(0ll, curSum[i-1] + arr[i]);    
        }
    
        maxSum = max(maxSum, curSum[i]);
    }

    return maxSum;
}
//!other approaches**********************************************************