#include <bits/stdc++.h>
using namespace std;

//UNION AND INTERSECTION OF SETS

class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        
        unordered_set<int> s;                       //set will not take duplicate elements
        
        for (int i = 0; i < n; i++) s.insert(a[i]);
        
        for (int i = 0; i < m; i++) s.insert(b[i]);
        return s.size();
    }
};

int main() {
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
 
    Solution example;
    
    cout << example.doUnion(arr1, m, arr2, n) << endl;
 
    return 0;
}