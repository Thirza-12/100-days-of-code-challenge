class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>arr1(128,-1);
        vector<int>arr2(128,-1);
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            if(arr1[s[i]]!=arr2[t[i]])
            {
                return false;
            }
            arr1[s[i]]=i;
            arr2[t[i]]=i;
        }

        return true;
    }
};
