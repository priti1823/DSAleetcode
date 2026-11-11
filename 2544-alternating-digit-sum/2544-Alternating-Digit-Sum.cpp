class Solution {
public:
    int alternateDigitSum(int n) {
        int count=0;
        int b=n;
        while(b>0)
        {
            int digit=n%10;
            b=b/10;
            count++;
        }
        int flag=0;
        int sum=0;
        if(count%2!=0)
        {   
            while(n>0)
            {   
                int digit=n%10;
                n=n/10;
                if(flag==0)
                {
                    sum+=digit;
                    flag++;
                }
                else if(flag==1)
                {
                    sum=sum-digit;
                    flag=0;
                }
                

            }
             return sum;
        }
        else if(count%2==0)
        {   
            while(n>0)
            {   
                int digit=n%10;
                n=n/10;
                if(flag==0)
                {
                    sum=sum-digit;
                    flag++;
                }
                else if(flag==1)
                {
                    sum=sum+digit;
                    flag=0;
                }
                

            }
             return sum;
        }
       return sum;
    }
};