vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int ans;
    int ans2;
    sort(a.begin(),a.end());
    ans=a[n-2];
    ans2=a[1];
    return {ans,ans2};
}
