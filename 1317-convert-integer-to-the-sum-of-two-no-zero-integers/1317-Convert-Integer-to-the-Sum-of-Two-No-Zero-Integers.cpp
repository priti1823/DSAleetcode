class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        vector<int>ans1;
        for(int i=0;i<n;i++)
        {   int flag=0;
            int b=i;
            while(b>0)
            {
                int digit=b%10;
                b=b/10;
                if(digit==0)
                flag++;


            }
            if(flag==0)
            {
                ans1.push_back(i);
            }
        }
        for(int i=0;i<ans1.size();i++)
        {
            for(int j=0;j<ans1.size();j++)
            {
                if(ans1[i]+ans1[j]==n)
                {
                    ans.push_back(ans1[i]);
                    ans.push_back(ans1[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};