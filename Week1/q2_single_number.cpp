#include <bits/stdc++.h>
using namespace std;

//FIND THE LONELY AHH NUMBER

class Solution{
    public:
    int findSingle(int N, int arr[]){
        int res = 0;
        for (int i = 0; i < N; i++)    
            res = res ^ arr[i];         //xor property: x^x = 0
     
        return res;
    }
};

int main()
    {
        int arr[] = { 2, 3, 5, 4, 5, 2,
                      4, 3, 5, 2, 4, 4, 2 };
        int n = sizeof(arr) / sizeof(arr[0]);
 
        // Function calling
        Solution example;
        cout << example.findSingle(n, arr) << endl;
 
        return 0;
    }