class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                        int sum=(nums[i]-nums[j]);
                        if(sum>0)
                        {
                            n=max(n,(long long)sum*nums[k]);
                        }
                }
            }
        }
        return n;
        
    }
};
