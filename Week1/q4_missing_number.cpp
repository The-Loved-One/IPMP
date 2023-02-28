#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(int array[], int n) {
        int sum = 0;
        for (int i = 0; i < n - 1; i++) sum = sum + array[i];
        return ( (((n*(n+1))/2)) - sum );
    }
};

int main() {
    int arr[] = { 1, 2, 3, 5 };
    int N = sizeof(arr) / sizeof(arr[0]);
    Solution example;
    cout << example.MissingNumber(arr, N);
    return 0;
}