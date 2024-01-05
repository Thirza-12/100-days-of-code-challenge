class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s,t;
        for(int i=0;i<word1.size();i++)
        {
            s=s+word1[i];
        }
        for(int j=0;j<word2.size();j++)
        {
            t=t+word2[j];
        }
        if(s==t)
        {
            return true;
        }

        return false;
    }
};
