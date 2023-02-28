#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i = 0, j = 0;

        while(i<n && j<n) {
            if(arr[j] != 0) {
                swap(arr[i], arr[j]);
                i++;
                j++;
            }
            else{
                j++;
    
            }
        }
	}
};

int main() {
    int arr[] = {0, 0, 0, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution example;
    example.pushZerosToEnd(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}