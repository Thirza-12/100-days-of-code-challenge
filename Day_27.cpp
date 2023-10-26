class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
        {
            return x;
        }
        int start = 1, end = x;
        while (start <= end) {
            long int mid = start + (end - start) / 2;
            if (mid*mid  == x)
                return mid;
            else if (mid*mid > x) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return end;
    }
};
