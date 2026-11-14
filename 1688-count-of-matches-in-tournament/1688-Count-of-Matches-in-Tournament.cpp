class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n!=1)
        {
            if(n%2!=0)
            {
                int b=(n-1)/2;
                sum+=b;
                n=(n-1)/2+1;
            }
            else if(n%2==0)
            {
                int b=n/2;
                sum+=b;
                n=n/2;
            }
        }
        return sum;
        
    }
};