class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                ans=ans+i;
            }
        }

        if(ans==num)
        {
            return true;
        }
        else
        {
        return false;
        }

    }
};
