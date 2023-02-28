#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& p) {
        int min_price = p[0];
        int res = INT_MIN;
        for(int i = 1; i <p.size(); i++){
            min_price = min(min_price, p[i]);
            res = max(res , p[i] - min_price);
        }
        return (res == INT_MIN) ? 0 : res;
    }
};

int main() {
    vector<int> prices {7, 1, 2, 3, 6, 4};
    Solution example;
    cout << example.maxProfit(prices) << endl;
}