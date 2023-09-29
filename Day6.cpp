class Solution {
public:
    bool isPowerOfTwo(int n) {
    // Power of two
    int i=0;
    while(i<=30)
    {
        int ans=pow(2,i);
        if(ans==n)
        {
            return true;
        }
        i++;
    }
    return false;
    } 
};
