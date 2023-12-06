class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maximum=0;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                maximum=max(maximum,count);
            }
            else
            {
                count=0;
            }
            
        }

        return maximum;

    }
};
