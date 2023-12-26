class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<4;i++)
        {
            for(int j=2;j<4;j++)
            {
                if((j-i)==2 && s1[i]!=s2[i])
                {
                    swap(s1[j],s1[i]);
                }
            }
        }

        if(s1==s2)
        {
            return true;
        }
        return false;
    }
};
