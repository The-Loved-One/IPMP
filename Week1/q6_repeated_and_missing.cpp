#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> repeatedNumber(const vector<int> &A) {
            vector<int> a;
    
            for(long long int i = 0; i < A.size(); i++) a.push_back(A[i]);
            
            vector<int> vec;
            
            for(int i = 0; i < a.size(); i++) {
                if(a[abs(a[i]) - 1] >= 0) a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
                else vec.push_back(abs(a[i]));
            }
            
            for(long long int i = 0; i < a.size(); i++) if(a[i] > 0) vec.push_back(i + 1);
            
            return vec;
        }
};

int main() {
    vector<int> arr = {1, 2, 2, 4, 5};
    Solution example;
    vector<int> final = example.repeatedNumber(arr);
    for (int i = 0; i < final.size(); i++) cout << final[i] << " ";
}