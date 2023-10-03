class Solution {
public:
    int subtractProductAndSum(int n) {

    // Subtract the product and sum of digits of an integer
      
    int lastdigit=0;
    int multiplication=1;
    int sum=0;
    while(n!=0)
    {
        lastdigit=n%10;
        multiplication=multiplication*lastdigit;
        sum=sum+lastdigit;
        n=n/10;
    }
    int ans=multiplication-sum;
    return ans;
    }
};
