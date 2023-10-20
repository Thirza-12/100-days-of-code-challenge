class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        if(target>nums[n-1])
        {
            return n;
        }
        while(start<end)
        {
            if(nums[mid]<target)
            {
                start=mid+1;
            }
            else if(nums[mid]>=target)
            {
                end=mid;
            }
            mid=(start+end)/2;
        }
        return start;
    }
};
