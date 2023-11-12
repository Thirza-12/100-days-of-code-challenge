class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3)
        {
            return false;
        }
        if(arr.size()==3)
        {
            if(arr[0]%2!=0 && arr[1]%2!=0 && arr[2]%2!=0)
            {
                return true;
            }
        }
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i]%2!=0 && arr[i-1]%2 !=0 && arr[i-2]%2 !=0)
            {
                return true;
            }
        }

        return false;
    }
};
