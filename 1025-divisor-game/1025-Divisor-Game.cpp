class Solution {
public:
    bool divisorGame(int n) {
        int start=0;
        while(n!=1)
        {
            for(int i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    n=n-i;
                    break;
                }
            }
            start++;
        }
        if(start%2!=0)
        return 1;
        return 0;
        
        

        
    }
};