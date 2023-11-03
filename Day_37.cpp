class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=0;
        int end=n-1;
        if(n>2)
        {
            int mid=start+(end-start)/2;
            return nums[mid];
        }
        return -1;
    }
};
