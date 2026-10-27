class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        int m=INT_MAX;
        for(int i=0;i<s.size();i++)
        {   m=INT_MAX;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==c)
                {
                    int b=i-j;
                    if(b<0)
                    b=-b;
                    if(b<m)
                    m=b;
                }
            }
         ans.push_back(m);
            }
            
        
        return ans;
    }
};