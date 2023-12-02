#include <bits/stdc++.h> 
vector < int > sqsorted(vector < int > & arr) {
    // Write your code here.
    vector<int>ans;
    for(int i=0;i<arr.size();i++)
    {
        ans.push_back(arr[i]*arr[i]);
    }

    sort(ans.begin(),ans.end());
    return ans;
}
