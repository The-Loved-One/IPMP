#include <bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    int findSum(int a[], int n)
    {
        int min = 0, max = 0;
    	
    	if (n == 1) return (a[0] + a[0]);
    	
    	else {
    	        if (a[0] < a[1]) {
    	            min = a[0]; 
    	            max = a[1];
    	        }
    	    
    	    else {
    	        min = a[1];
    	        max = a[0];
    	    }
    	    
    	    for (int i = 2; i < n; i++) {
    	        if (a[i] < min) min = a[i];
    	        if (a[i] > max) max = a[i];
    	    }
    	}
    	return (min + max);
    }
};

int main() {
    int A[] = {-2, 1, -4, 5, 3};
    int n = sizeof(A)/sizeof(A[0]);
    Solution example;
    cout << example.findSum(A, n);
}