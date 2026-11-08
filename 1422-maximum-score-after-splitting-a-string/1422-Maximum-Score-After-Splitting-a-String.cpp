class Solution {
public:
    int maxScore(string s) {
        int pre=0;
        for(int i=0;i<s.size()-1;i++)
        {   int count=0;
            int coo=0;
            for(int j=0;j<=i;j++)
            {
                if(s[j]=='0')
                count++;
            }
            for(int k=i+1;k<s.size();k++)
            {
                if(s[k]=='1')
                coo++;
            }
            int sum=count+coo;
            if(sum>pre)
            pre=sum;
        }
        return pre;
        
    }
};