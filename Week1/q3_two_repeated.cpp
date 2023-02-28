#include <bits/stdc++.h>
using namespace std;

//FIND TWO REPEATED ELEMENTS

class Solution {
  public:
    vector<int> twoRepeated (int arr[], int N) {
        vector<int> v;
        
        for (int i = 0; i < N + 2; i++) {
            if (arr[abs(arr[i])] > 0) arr[abs(arr[i])] = -arr[abs(arr[i])];     //marking the index as negative
            else {
                cout << abs(arr[i]) << endl;
                v.push_back(abs(arr[i]));
            }
        }
        return v;
    }
};

int main() {
    int arr[] = { 4, 2, 4, 5, 2, 3, 1 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    Solution example;
    example.twoRepeated(arr, arr_size);
    return 0;
}