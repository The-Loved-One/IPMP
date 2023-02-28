#include <bits/stdc++.h>
using namespace std;

//make sure you understand these completely

class Solution{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& arr, int n)
    {
        vector<long long int> prefix(n);
        prefix[0] = 1;
        for (int i = 1; i < n; i++) prefix[i] = prefix[i - 1] * arr[i - 1];
        
        vector<long long int> suffix(n);
        suffix[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) suffix[i] = suffix[i + 1] * arr[i + 1];
        
        vector<long long int> product(n);
        for (int i = 0; i < n; i++) product[i] = prefix[i] * suffix[i];
        
        return product;
    }
};

int main() {
    vector<long long int> array {10, 3, 5, 6, 2};
    Solution example;
    vector<long long int> output = example.productExceptSelf(array, array.size());
    for (int i = 0; i < array.size(); i++) cout << output[i] << " ";
}