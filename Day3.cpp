class Solution {
public:
    bool isPalindrome(int x) {
    // Palindrome number
    long int rev=0;
    int ld=0;
    int n=x;
    while(n>0)
    {
        ld=n%10;
        rev=rev*10+ld;
        if(rev>INT_MAX)return 0;
        if(rev<INT_MIN)return 0;
        n=n/10;
    }
    return (int)rev==x;
    }
};
