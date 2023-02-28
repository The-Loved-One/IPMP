#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minRow(int N, int M, vector<vector<int>> A) {
        int min = INT_MAX;
        int minIndex = -1;
        for (int i = 0; i < N; i++) {
            int count = 0;
            for (int j = 0; j < M; j++) {
                if (A[i][j] == 1) count++;
            }
            if (min > count) {
                min = count;
                minIndex = i + 1;
            }
        }
        return minIndex;
    }
};

int main() {
    vector<vector<int>> test {{0, 1, 1, 1}, {1, 0, 1, 0}, {0, 0, 0, 0}, {1, 1, 1, 1}};
    Solution example;
    cout << example.minRow(test.size(), test.size(), test);
}