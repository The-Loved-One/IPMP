#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	vector<int> downwardDiagonal(int n, vector<vector<int>> arr)
	{
        map<int, vector<int>> m;

        // traverse the array and insert all elements using
        // property: sum of indices
        // for elements where sum of indices are equal
        // they will be stored (in sorted order) as a vector 
        // (technically even for first and last element its a vector with single element)
        
        for (int i = 0; i < n; i++) for(int j=0;j<n;j++) m[i+j].push_back(arr[i][j]);
        
        vector<int> ans;
        
        // concatenate vector (in the map) into ans

        for(auto i : m) ans.insert(ans.end(), (i.second).begin(), (i.second).end());
        
        //i.second is the vector
        
        return ans;
	}
};

int main() {
    vector<vector<int>> input
    {
        {  1  ,  2  ,  3  ,  4  },
        {  5  ,  6  ,  7  ,  8  },
        {  9  ,  10 , 11  ,  12 } ,
        {  13 ,  14 , 15  ,  16 }
    };

    Solution example;
    vector<int> output = example.downwardDiagonal(input.size(), input);
    for (auto i : output) cout << i << " ";
}