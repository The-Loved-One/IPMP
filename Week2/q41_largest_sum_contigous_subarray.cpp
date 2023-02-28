#include <bits/stdc++.h>
using namespace std;

// KADANE'S ALGORITHM

class Solution{
    public:
    string maxSum(string w,char x[], int b[],int n)
    {
        map<char, int> mp;

        // mapping values present in b
        // to their respective chars in x
        for(int i = 0; i < n; i++) mp[x[i]] = b[i];     
        
        int sum = 0, maxSum = 0, start = 0, end = 0, mstart = 0, mend = 0;
        
        // sum to track current sum
        // maxSum to track current largest sum;
        // start and end to help with traversal through string
        // mstart and mend for the returning string

        for(int i = 0; i < w.length(); i++) {
            
            // if current char exists in map
            // add the given modified ASCII value to sum
            if (mp.find(w[i]) != mp.end()) sum += (int)mp[w[i]];

            // else just add the normal ASCII value to sum
            // which means that char doesnt exist in map
            else sum += w[i];

            // if current sum is negative, then reset sum to 0
            // and move on to next index  
            if (sum < 0) { sum = 0; start = i + 1; }

            // if current sum is greater than the maxSum
            // then assign current sum to maxSum
            // returned string start index should be current start
            // and its end should be current index;
            if (sum > maxSum) {
                maxSum = sum;
                mstart = start;
                mend = i;
                end = i;
            }
        }
        return w.substr(mstart, mend - mstart + 1);
    }
};

int main() {
    string word = "abcde";
    char x[] = {'c'};       //, 'l', 'o'};
    int b[] = {-1000};       //, -500, 200};
    int n = sizeof(x)/sizeof(x[0]);
    Solution example;
    cout << example.maxSum(word, x, b, n);
}