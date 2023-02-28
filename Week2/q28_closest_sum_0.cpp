#include <bits/stdc++.h>
using namespace std;

//basically just two pointer method

class Solution
{
    public:
        int closestToZero(int arr[], int n) {
            sort(arr,arr+n);                    //easier to deal with + nlogn
            int left = 0, right = n - 1, prevSum = INT_MAX, sum = 0; //INT_MAX just to have comparision, any large number will do
            
            while (left < right) {
                if (abs(arr[left] + arr[right]) < prevSum) {        
                    prevSum = abs(arr[left] + arr[right]);
                    sum = arr[left] + arr[right];
                }
                else if (abs(arr[left] + arr[right]) == prevSum) {
                    sum = max (sum, arr[left] + arr[right]);    //question said to return maximum of closest sum if any 2 sums are equal
                }
                if ((arr[left] + arr[right]) > 0) right--;      //checking for smaller sums    
                else left++;
            }
        return sum;
        }
};

int main() {
    int arr[] = {-5, -25, -10, 0, 20, -15, 30, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Solution example;
    cout << example.closestToZero(arr, n);
}