#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool subArrayExists(int arr[], int n)
    {
        int sum = 0;
        unordered_set<int> ans;
        
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            if (sum == 0 || ans.find(sum) != ans.end()) return true;
            //find will return end if the element with that value is not found
            ans.insert(sum);
        }
        return false;
    }
};

int main() {
    int arr[] = {4, 2, -3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution example;
    cout << example.subArrayExists(arr, n);
}