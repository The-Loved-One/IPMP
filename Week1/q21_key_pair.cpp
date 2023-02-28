#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	bool hasArrayTwoCandidates(int arr[], int n, int x) {   //using hash, learn to how to use
	    unordered_set<int> ans;                             //hashing and hash table mf
	    for (int i = 0; i < n; i++) {
	        if(ans.find(x - arr[i]) == ans.end()) ans.insert(arr[i]);
	        else return true;
	    }
	    return false;
	}
};

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 49;

    Solution example;
    cout << example.hasArrayTwoCandidates(arr, n, x);
}