class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string result="";
        for(auto i: words)
        {
            result=result+i[0];
        }
        if(result==s)
        {
            return true;
        }

        return false;
    }
};
