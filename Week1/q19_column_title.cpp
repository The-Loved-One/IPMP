#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        char calc;
        while(columnNumber) {
            columnNumber -= 1;                  //moving weight
            calc = 'A' + columnNumber % 26;     //reverse of q18
            result = calc + result;
            columnNumber /= 26;                 //moving weight again
        }
        return result;
    }
};

int main() {
    int x = 30;
    Solution example;
    cout << example.convertToTitle(x);
}