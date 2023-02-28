#include <bits/stdc++.h>
using namespace std;

// IMPLEMENTATION USING HASHMAP

class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        unordered_map<int, int> hM;
 
        int sum = 0;
        int subarray_length = 0;
        int ending_index = -1;
 
        // We take value of 0 as -1, and 1 as 1.
        for (int i = 0; i < n; i++) arr[i] = (arr[i] == 0) ? -1 : 1;
 
        for (int i = 0; i < n; i++) {
            
            // Calculate sum
            sum += arr[i];
 
            // If sum is zero, it means at this index
            // we have equal number of 0s and 1s
            if (sum == 0) subarray_length = i + 1;        // assign subarray-length (1-based indexing)
 
            
            // If the sum already exists in the hashmap (that is we have seen it already)
            // subarray from the previous index + 1 till the present index 
            // has equal number of 0s and 1s 
            // since they give a cumulative sum of 0
            if (hM.find(sum) != hM.end()) {
                if (subarray_length < i - hM[sum]) 
                    subarray_length = i - hM[sum];
            }

            // If we havent seen the sum before
            // put it in the hashmap
            else hM[sum] = i;
        }
 
        for (int i = 0; i < n; i++) arr[i] = (arr[i] == -1) ? 0 : 1;
        
        return subarray_length;
    }
};

int main() {
    int arr[] = {0, 1, 0, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution example;
    cout << example.maxLen(arr, n) << endl;
}