class Solution {
public:
    int reverse(int x) {
      
        // reverse integer
      
        long int rev=0;
         int lastdigit=0;
        while(x!=0)
        {
            lastdigit=x%10;
            rev=(rev*10)+lastdigit;
            if(rev>INT_MAX)return 0;
            if(rev<INT_MIN)return 0;
            x=x/10;
        }
        return(int) rev;
    }
};
