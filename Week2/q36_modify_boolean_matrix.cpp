#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int rows = matrix.size(), columns = matrix[0].size(), left = 0, top = 0;

        // left for horizontal traversal during modification
        // top for vertical traversal during moification

        // int left = 0; right = columns;
        // int top = 0; bottom = rows;
        
        vector<pair<int, int>> indices;         // vector to store the positions of the 1's in matrix
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix[i][j] == 1) indices.push_back(make_pair(i, j));  // store positions in vector
            }
        }
        
        // for (auto x : indices) cout << x.first << " " << x.second << endl;
        
        for (auto x : indices) {
            int i = x.first, j = x.second;              // for traversal
            while (left < rows) matrix[left++][j] = 1;  // assign 1 for all elements in jth column
            left = 0;
            while (top < columns) matrix[i][top++] = 1; // assign 1 for all elements in ith row
            top = 0;
        }
    }
};

int main() {
    vector<vector<int>> input 
    {
        {1, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 1}
    };

    Solution example;
    example.booleanMatrix(input);

    // for (int i = 0; i < input.size(); i++) {
    //     for (int j = 0; j < input[0].size(); j++) cout << input[i][j] << " ";
    //     cout << endl;
    // }

    for (auto x : input) { for (auto y : x) cout << y << " "; cout << endl; }
}