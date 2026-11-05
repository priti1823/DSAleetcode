class Solution {
public:
    int countEven(int num) {
        int count=0;
        
        for(int i=2;i<=num;i++)
        {
            int b =i;
            int sum=0;
            while(b>0)
            {
                int digit=b%10;
                b=b/10;
                sum=sum+digit;
            }
            if(sum%2==0)
            {
                count++;
            }
        }
        return count;
    }
};