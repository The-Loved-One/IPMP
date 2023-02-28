#include <bits/stdc++.h>
using namespace std;

//two pointer method

//equilibrium index is an index such that 
//the sum of elements at lower indexes is 
//equal to the sum of elements at higher indexes

class Solution{
    public:
    int equilibriumPoint(long long arr[], int n) {
    
        int leftSum = 0;
        int pivot = 0;      //index of pivot element
        int arrSum = 0;     //total sum of the array
        for (int i = 0; i < n; i++) {
            arrSum += arr[i];           //calculate total sum of array
        }
        int rightSum = arrSum - arr[0]; //initial value of right sum because pivot is at 0th index
        
        while (pivot < n && rightSum != leftSum) {
            pivot++;                                //increment pivot index
            rightSum = rightSum - arr[pivot];
            leftSum = leftSum + arr[pivot - 1];
        }
        
        if (leftSum == rightSum)    //condition of equillibrium
            return { pivot + 1 };   //question said its a 1-based array
        else return -1;
    }
};

int main() {
    long long int arr[] = {1,3,5,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    Solution example;
    cout << "Equillibrium element is: " << arr[example.equilibriumPoint(arr, n) - 1];
}