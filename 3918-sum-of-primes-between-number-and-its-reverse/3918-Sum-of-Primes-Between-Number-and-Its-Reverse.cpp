class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int b=n;
        int ans=0;
        while(b>0)
        {
            int digit=b%10;
            ans=ans*10+digit;
            b=b/10;
        }
        int c=min(n,ans);
        int d=max(n,ans);
        int sum=0;
        for(int i=c;i<=d;i++)
        {   int flag=0;
            if(i==1)
            flag++;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                flag++;
            }
            if(flag==0)
            sum=sum+i;
        }
        return sum;
        
    }
};