#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    public:
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int rotation = 0;   // to take care of "direction"
        int top = 0, bottom = r - 1, left = 0, right = c - 1;
        
        vector<int> ans;
        
        while (top <= bottom && left <= right) {
            if (rotation == 0) {                    // rotation 0 = left to right
                int i = left;
                while (i <= right) ans.push_back(matrix[top][i++]); // store elements of the top-th row
                top++;          // increment top to next row
                rotation = 1;
            }
            
            else if (rotation == 1) {               // rotation 1 = top to bottom
                int i = top;
                while (i <=bottom) ans.push_back(matrix[i++][right]);   // store elements of right-th column
                right--;        // decrement right to previous column
                rotation = 2;
            }
            
            else if (rotation == 2) {               // rotation 2 = right to left
                int i = right;
                while (i >= left) ans.push_back(matrix[bottom][i--]);   // store elements of bottom-th row
                bottom--;       // decrement bottom to previous row
                rotation = 3;
            }
            
            else if (rotation == 3) {               // rotation 3 = bottom to top
                int i = bottom;
                while (i >= top) ans.push_back(matrix[i--][left]);      // store elements of left-th column
                left++;         // increament left to next column
                rotation = 0;                       // set rotation back to 0
            }
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> test 
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15,16}
    };

    Solution example;
    vector<int> output = example.spirallyTraverse(test, test.size(), test[0].size());
    for (auto x : output) cout << x << " ";
}