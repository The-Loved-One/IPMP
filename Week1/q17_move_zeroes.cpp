#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0, l = 0; i < nums.size(); i++)
            if(nums[i] > 0 || nums[i] < 0)
                swap(&nums[i], &nums[l++]); 
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution ex;
    ex.moveZeroes(nums);
    for (auto x : nums) cout << x << " ";
}