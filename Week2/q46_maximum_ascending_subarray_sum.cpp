#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        // int local_sum = 0, global_sum = 0;

        // for (int i = nums.size(); i >= 1; i--) {
        //     if (nums[i] > nums[i - 1]) local_sum += nums[i];
        //     else {
        //         local_sum += nums[i];
        //         global_sum = max(local_sum, global_sum);
        //         local_sum = 0;
        //     }
        // }
        // return max(local_sum, global_sum);

        int local_sum = nums[0], global_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) local_sum += nums[i];
            else {    
                global_sum = max(local_sum, global_sum);
                local_sum = nums[i];
            }
        }
        return max(local_sum, global_sum);
    }
};

int main() {
    vector<int> input {1, 2, 3, 4, 5};
    Solution example;
    cout << example.maxAscendingSum(input);
}