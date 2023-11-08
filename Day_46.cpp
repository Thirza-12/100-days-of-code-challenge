class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        int start=low;
        int end=high;
        while(start<=end)
        {
            if(start%2!=0)
            {
                count++;
            }

            start++;
        }

        return count;

    }
};
