class Solution {
public:
    int totalMoney(int n) {
        int b=n/7;
        int start=1;
        int sum=0;
        while(b>0)
        { for(int i=start;i<=start+6;i++)
        {
            sum+=i;
        }
        start++;
        b--;

        }
        int c=n%7;
        while(c>0)
        {
            sum+=start;
            start++;
            c--;
        }
        return sum;

        
    }
};