#include <bits/stdc++.h>
using namespace std;

string reverseWord(string arr){
    int i = 0, j = arr.size() - 1;
   
    while (i < j) swap (arr[i++], arr[j--]);

    return arr;
}

int main() {
    string i = "urmom";
    cout << reverseWord(i);
}