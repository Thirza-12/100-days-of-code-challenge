int isSorted(int n, vector<int> a) {
    // Write your code here.
    vector<int>b=a;
    sort(b.begin(),b.end());
    for(int i=0;i<b.size();i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        else
        {
            return 0;
        }
    }

    return 1;
}
