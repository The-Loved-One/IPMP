#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    // helper function to reverse an array
    void reverse(vector<int>& nums, int l, int r) {
        while(l < r) swap(nums[l++], nums[r--]);
    }
    
    void rotate(vector<int>& nums, int k) {
        reverse(nums, 0, nums.size() - 1);      // reverse full array
        reverse(nums, 0, k - 1);                // reverse the reversed array from 0 to k
        reverse(nums, k, nums.size() - 1);      // reverse the reversed array from k to nums.size()
    }
};

int main() {
    vector<int> input {2, 3, 4, 5, 6};
    int k = 2;
    Solution example;
    example.rotate(input, k);
    for (int i = 0; i < input.size(); i++) cout << input[i] << " ";
}