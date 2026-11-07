class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int squa=0;
        while(n>0)
        {
            int digit=n%10;
            n=n/10;
            sum=sum+digit;
            squa=squa+(digit*digit);
        }
        int ans=squa-sum;
        if(ans>=50)
        return 1;
        return 0;
        
    }
};