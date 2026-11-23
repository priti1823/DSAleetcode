class Solution {
public:
    int countMonobit(int n) {
        int sum=0;
        for(int i=0;i<=n;i++)
        {   int flag=0;
            int b=i;
            int pre=b%2;
            while(b>0)
            {
                int digit=b%2;
                b=b/2;
                if(digit!=pre)
                flag++;
            }
            if(flag==0)
            sum++;
        }
        return sum;
        
    }
};