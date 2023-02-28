#include <bits/stdc++.h>
using namespace std;

// A subarray is said to be nice if
// there are exactly k odd numbers in that subarray

class Solution {
public:
    int numberOfSubarrays(vector<int>& arr, int k) {
        
        // result is the final number of subarrays
        // i is to help with traversing
        // count simply counts the number of subarrays with k odd numbers
        int res = 0, i = 0, count = 0;
        
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] % 2 == 1) {
                --k;                // when an odd number is seen, decrement k
                count = 0;          // reset count to 0
            }
            while (k == 0) {
                k += arr[i++] % 2;  // when we reach target k
                ++count;
            }
            res += count;
        }
        return res;
    }
};

int main() {
    vector<int> input {1, 1, 2, 1, 1};
    Solution example;
    cout << example.numberOfSubarrays(input, 3);
}