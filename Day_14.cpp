#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    return arr[n-1];
    
}
