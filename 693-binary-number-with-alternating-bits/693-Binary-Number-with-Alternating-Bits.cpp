class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pre=INT_MIN;
        while(n>0)
        {
            int digit=n%2;
            n=n/2;
            if(digit==pre)
            {
                return false;
            }
            pre=digit;
        }
        return true;
        
    }
};