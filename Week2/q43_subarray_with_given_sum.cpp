#include <bits/stdc++.h>
using namespace std;

// Algorithm used is "Sliding Window"
// Compute one "section" at a time
// If the goal is met, return results
// If the goal is not met, move on to the next section
// On the next section, undo the computation results of the previous section

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long local_sum = 0;        //, global_sum = INT_MIN;
        int startingIndex = 0;          //, endingIndex = n - 1;
        int i;
        
        //vector<int> ans;
        
        for (i = 0; i < n; i++) {
            local_sum += arr[i];    
            while (local_sum > s && startingIndex < i) local_sum -= arr[startingIndex++];
            if (local_sum == s) return {++startingIndex, ++i};
        }
        
        while (local_sum > s && startingIndex < n - 1) local_sum -= arr[startingIndex++];
            
        if (local_sum == s) return {++startingIndex, ++i};
        
        return {-1};
    }
};

int main() {
    vector<int> input {1, 2, 3, 5, 7, 9};
    Solution example;
    vector<int> output = example.subarraySum(input, input.size(), 8);
    for (auto x : output) cout << x << " ";
}