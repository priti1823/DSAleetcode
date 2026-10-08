class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int n=left;
        int total=0;
        while(n<=right)
        {   int count=0;
            int m=n;
            while(m>0)
            {
                int digit=m%2;
                if(digit==1)
                {
                    count++;
                }
                m=m/2;
            }
            int flag=0;
            for(int i=2;i*i<=count;i++)
            {     if(count%i==0)
            {
                flag=1;
            }
            }
            if(count==1)
            {
                flag=1;
            }
            if(flag==0)
            {
                total++;
            }
            n++;
        }
        return total;
    }
};