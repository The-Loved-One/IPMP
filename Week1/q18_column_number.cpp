#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            int val_alph = c - 'A' + 1;
            result = result * 26 + val_alph;
        }
        return result;
    }
};

int main() {
    string title = "AA";
    Solution example;
    cout << example.titleToNumber(title);
}