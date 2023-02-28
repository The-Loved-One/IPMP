#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        multiset<int> ans;
        for (int i = 0; i < n; i++) {
            ans.insert(a[i]);
        }
        
        copy (ans.begin(), ans.end(), a);

        for (auto x : ans) cout << x << " "; //checking here cus i too laze to print the mset
    }
};

int main() {
    int a[] = {0, 1, 2, 1, 2, 1, 1, 1, 2, 2, 2, 0, 0, 0, 0, 1, 0, 2, 1, 0, 2, 1, 1, 2, 0, 0, 0, 2};
    int n = sizeof(a)/sizeof(a[0]);
    Solution example;
    example.sort012(a, n);
}