Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

int getSingleElement(vector<int> &arr) {

    //size of the array:
    int n = arr.size();

    // Find the maximum element:
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }

// ? know how to use an hash array
    // Declare hash array of size maxi+1
    // And hash the given array:
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    //Find the single element and return the answer:
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1)
            return arr[i];
    }

    //This line will never execute
    //if the array contains a single element.
    return -1;
}

// *optimal solution
//*Assume the given array is: [4,1,2,1,2]
//*XOR of all elements = 4^1^2^1^2
//*      = 4 ^ (1^1) ^ (2^2)
//*      = 4 ^ 0 ^ 0 = 4^0 = 4
//*Hence, 4 is the single element in the array.

int getSingleElement(vector<int> &arr) {
    //size of the array:
    int n = arr.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}