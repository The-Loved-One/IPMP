#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for (auto x : nums) {
            if (nums[abs(x)] < 0) {
                return abs(x);
            }
            
            else {
                nums[abs(x)] = -nums[abs(x)];
            }
        }
        return -1;
    }
};

int main() {
    vector<int> hahsdhasd = {1, 2, 4, 3, 3};
    Solution example;
    cout << example.findDuplicate(hahsdhasd);
}