class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ans=0;
        int ans2=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans+nums[i];
            while(nums[i]!=0)
            {
                int rem=nums[i]%10;
                ans2=ans2+rem;
                nums[i]=nums[i]/10;
            }
        }

        return ans-ans2;
        
    }
};
