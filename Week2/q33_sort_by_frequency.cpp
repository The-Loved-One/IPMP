#include <bits/stdc++.h>
using namespace std;

// bool compare(pair<int,int> a, pair<int,int> b) {         // helper function
//     if (a.second == b.second)                            // if frequency is same 
//         return a.first < b.first;                        // return the smaller number
//     else return a.second > b.second;                     // else return the number with greater frequency
// }

vector<int> sort_frequency(int arr[], int n) {
    map<int,int> m;                                     // int - int map to store {value, count of value}

    for (int i = 0; i < n; i++) m[arr[i]]++;            // array to map
    
    vector<pair<int, int>> count;                       // vector of pair type to store {value, count of value}

    for (auto x : m) 
        count.push_back ({x.first, x.second});          // map to vector

    vector<int> ans;                                    // output vector

    sort (count.begin(), count.end());         // sort as per question specifics

    for (auto x : count) {
        int k = x.second;                               // store count in k
        while (k--) { ans.push_back(x.first); }         // store element x.first (value) k times (frequency)
    }
    return ans;
}

int main() {
    int t, n;
    
    cin >> t;                                           // number of test cases
    
    while (t--) {
        cin >> n;                                       // size of t-th array
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];       // values of array elements
        vector<int> final = sort_frequency(arr, n);
        for (auto x : final) cout << x << " ";
        cout << endl;
    }
}