#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        
        //we are starting from top right element
        int i = 0, j = m - 1;   //modified for n x m array
        
        while (i < n && j >= 0) {
            if (matrix[i][j] == x) return true;
            
            //since its sorted, if the matrixval is greater than
            //targetval, we need to move to left column
            //that contains smaller numbers
            if (matrix[i][j] > x) j--;

            //if (matrix[i][j] < x)
            //we meed to move to next row that contains
            //greater numbers
            else i++;
        }
        
    return false;
    }
};

int main() {
    vector<vector<int>> testmatrix 
    {
        { 3, 30, 38}, 
        {36, 43, 60}, 
        {40, 51, 69}
    };
    Solution example;
    cout << example.search(testmatrix, testmatrix.size(), testmatrix[0].size(), 5);
}