class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0)
        return 1;
        int b=num;
        int ans=0;
        int ann=0;
        while(b>0)
        {
            int digit=b%10;
            b=b/10;
            ans=ans*10+digit;
        }
        while(ans>0)
        {
            int digit=ans%10;
            ans=ans/10;
            ann=ann*10+digit;
        }
        if(ann==num)
        return 1;
        return 0;
        
    }
};