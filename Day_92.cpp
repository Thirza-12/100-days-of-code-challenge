class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size()+nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),ans.begin());
        int start=0;
        int end=ans.size()-1;
        double mid=start+(end-start)/2;
        if(ans.size()%2 !=0)
        {
            return ans[mid];
        }
        return (ans[mid]+ans[mid+1])/(double)2;;
        
    }
};
