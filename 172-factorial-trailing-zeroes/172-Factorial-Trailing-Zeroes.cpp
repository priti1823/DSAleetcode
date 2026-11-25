class Solution {
public:
    int trailingZeroes(int n) {
        int i=5;
        int sum=0;
        int b=0;
          while(i<=n)
          {
            b=n/i;
            sum+=b;
            i=i*5;
          }

        return sum;
        
        
        
    }
};