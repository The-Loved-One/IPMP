#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	long long maxProduct(vector<int> arr, int n) {
        long long minVal = arr[0];
	    long long maxVal = arr[0];
	    long long ans = arr[0];

	    for (int i = 1; i < n; i++) {

            // if current element is negative
            // swap current minproduct and the maxproduct
	        if (arr[i] < 0) swap(maxVal, minVal);

            // current maxproduct should be the maximum of
            // current element and maxproduct*current element
	        maxVal = max((long long)arr[i], maxVal * arr[i]);

            // current minproduct should be minimum of
            // current element and minproduct*current element
	        minVal = min((long long)arr[i], minVal * arr[i]);

            // answer should be the maximum of the 
            // current maxproduct and product of previous iteration
            ans = max((long long)ans, maxVal);
        }
    return ans;
	}
};

int main() {
    vector<int> input {6, -3, -10, 0, 2};
    Solution example;
    cout << example.maxProduct(input, input.size());
}