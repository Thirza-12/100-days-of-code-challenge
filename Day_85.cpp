class Solution {
    private:
        int signFunc(double x)
        {
            if(x>0)
            {
                return 1;
            }
            else if(x<0)
            {
                return -1;
            }
            return 0;
        }
public:
    int arraySign(vector<int>& nums) {
        double product=1;
        for(int i=0;i<nums.size();i++)
        {
            product=product*nums[i];
        }

        return signFunc(product);

    }
};
