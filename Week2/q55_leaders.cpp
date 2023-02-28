#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> leaders(int arr[], int n){
        vector<int> ans;
        int leader = arr[n - 1];
        for (int i = n - 1 ;i >= 0; i--) if (arr[i] >= leader) leader = arr[i], ans.push_back(leader);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution example;
    vector<int> output = example.leaders(arr, n);
    for (auto x : output) cout << x << " ";
}