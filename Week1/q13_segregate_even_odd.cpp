#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	

	void segregateEvenOdd(int arr[], int n) {
	    int left = 0, right = n - 1;
	    
	    while (left < right) {
	        while (arr[left] % 2 == 0 && left < right) left++;
	        while (arr[right] % 2 == 1 && left < right) right--;
	        
	        int temp = arr[left];
	        arr[left] = arr[right];
	        arr[right] = temp;
	    }
	    
	    sort(arr, arr + left);
	    sort(arr + left, arr + n);
	}
};

int main() {
    int Arr[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    Solution example;
    example.segregateEvenOdd(Arr, n);
    for (int i = 0; i < n; i++) cout << Arr[i] << " ";
}