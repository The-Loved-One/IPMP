#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for (int i = 0; i <= 2 * (n - 1); i++) {    // swap diagonal elements        
            int j = 0, k = i;
            if (k >= n) {                       // if encountered main diagonal, update j and k accordingly
                j = k - n + 1;                      
                k = n - 1;
            }
            while (j < k) {
                swap(matrix[j][k], matrix[k][j]);   // swap diagonal elements
                j++;                                // decrement row
                k--;                                // decrement column
            }
        }
        
        for(int i = 0; i < n / 2; i++){
            int j = 0;
            while (j < n) {
                swap(matrix[j][i], matrix[j][n - i - 1]);
                j++;                                // column wise swap
            }
        }
    }
};

int main() {
    vector<vector<int>> input
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution example;
    example.rotate(input);

    for (auto x : input) { for (auto y : x) cout << y << " "; cout << endl; }
}