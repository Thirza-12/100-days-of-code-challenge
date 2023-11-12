class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans;
        int size=nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            int count=1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count==size)
            {
                ans=nums[i];
                break;
            }
        }

        return ans;
    }
};
