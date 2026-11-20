class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>ans;
        vector<int>ans1(prices.size());
        int b=INT_MAX;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<b)
            b=prices[i];
            ans.push_back(b);
        }
        int c=INT_MIN;
         for(int j=prices.size()-1;j>=0;j--)
             {
            if(prices[j]>c)
             c=prices[j];
             ans1[j]=c;
            }
        int h=INT_MIN;
        int d=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            d=ans1[i+1]-ans[i];
            if(d>0)
            {
            if(d>h)
            h=d;
            }
        }
        if(h==INT_MIN)
        return 0;
        return h;
        
        
    }
};