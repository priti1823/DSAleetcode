class Solution {
public:
    int secondHighest(string s) {
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0')
            {
                int b=s[i]-'0';
                ans.push_back(b);
            }
        }
        int b=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>b)
            b=ans[i];
        }
        int c=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!=b)
            {
                if(ans[i]>c)
                c=ans[i];
            }
        }
        if(c==INT_MIN)
        return -1;
        return c;
    }
};