#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int n) {
        int min = 0;        //min-index
        int max = n - 1;    //max-index
        
        if (n < 3) return {};
        
        int smaller[n], greater[n];
        smaller[0] = -1;            
        greater[n - 1] = -1;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] <= arr[min]) {
                min = i;                //store index of smaller element in min-index
                smaller[i] = -1;        
            }
            else smaller[i] = min;      
        }
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= arr[max]) {
                max = i;                //store index of greater element in max-index
                greater[i] = -1;
            }
            else greater[i] = max;
        }
        
        for (int i = 0; i < n; i++)
            if (smaller[i] != -1 && greater[i] != -1) 
                return {arr[smaller[i]], arr[i], arr[greater[i]]};      
            // ^^ another way to return vectors instead of just making them 
        
        return {};
    }
};

int main() {
    vector<int> test {5, 6, 2, 30};
    Solution example;
    vector<int> out = example.find3Numbers(test, test.size());
    for (int i = 0; i < out.size(); i++) cout << out[i] << endl;
}