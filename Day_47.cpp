class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector <int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];

            ans.push_back(num*num);
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};
