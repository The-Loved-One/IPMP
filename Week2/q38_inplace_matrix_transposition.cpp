#include <bits/stdc++.h>
using namespace std;

// i dont understand this

class Solution {
    public:
    vector<vector<char>> transpose(vector<vector<char>> matrix) {
        int originalRows = matrix.size();
        int originalColumns = matrix[0].size();
        int transposedRows = originalColumns;
        int transposedColumns = originalRows;
    }
};

int main() {
    vector<vector<char>> input 
    {
        {'a', 'b', 'c'},
        {'d', 'e', 'f'}

    };

    // ================== 
    // {
    //     {'a', 'b'},
    //     {'c', 'd'},      OUTPUT MATRIX
    //     {'e', 'f'}
    // }
    // ==================
    
    Solution example;
    vector<vector<char>> output = example.transpose(input);
    for (auto i : output) for (auto j : i) cout << j << " "; cout << endl;
}