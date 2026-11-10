class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1)
        return 0;
        if(n%2==0)
        {
        int ans=n/2;
        return ans;
        }
        else
        {
            return n;
        }
        
    }
};