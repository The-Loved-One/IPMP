#include <bits/stdc++.h>
using namespace std;

//tried hashing from knowledge, didnt work
//"as expected" <= NOOB

class Solution{
    public:
    bool find3Numbers(int arr[], int n, int x)
    {
    
    
    //     unordered_set<int> ans;
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 1; j < n; j++) {
    //             if (ans.find(arr[x - arr[i] - arr[j]]) == ans.end()) ans.insert(arr[i]);
    //             else return true;
    //         }
    //     }
    //     return false;
    
    //=========================================
    //          Trying official method
    //=========================================
    
    
    sort(arr, arr + n);
    // int left, right;
    
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                if (arr[i] + arr[left] + arr[right] == x) return true;
                else if (arr[i] + arr[left] + arr[right] > x) left++;
                else if (arr[i] + arr[left] + arr[right] < x) right++;
            }
        }
    return false;
    }
    
    //WHY IS IT STILL NOT WORKING AAAAAAAAAAAAAAAAAAAAAAAAAAAAA
};

int main() {
    int arr[] = {1, 2, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;

    Solution example;
    cout << example.find3Numbers(arr, n, x);
}

//its working in vscode but not in leetcode 
//like
//WHYYY