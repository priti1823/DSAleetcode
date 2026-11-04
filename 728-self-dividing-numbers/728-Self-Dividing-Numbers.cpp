class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {   int b=i;
            int flag=0;
            while(b>0)
            {
                int digit=b%10;
                b=b/10;
                if(digit==0)
                {
                    flag++;
                    break;
                }
                
                if(i%digit!=0)
                {   flag++;
                    break;
                }

            }
            if(flag==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};