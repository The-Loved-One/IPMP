#include <bits/stdc++.h>
using namespace std;

// Find the maximum sum possible such that no two elements are adjacent

class Solution
{
    public:
    int FindMaxSum(int arr[], int n)
    {

        // incl is the sum that includes the (i - 1)th element
        // excl is the sum that excludes the (i - 1)th element
        // new_excl is used to store the max (ie maximum of incl and excl) sum at ith element
        int incl = arr[0], excl = 0, new_excl, i;
        
        for (i = 1; i < n; i++) {
            new_excl = max(excl, incl);
            incl = excl + arr[i];
            excl = new_excl;
        }
        
        return max(incl, excl);
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution example;
    cout << example.FindMaxSum(arr, n) << endl;

    // Should be 2 + 4 + 6 + 8 + 10
    // 30 I think
}