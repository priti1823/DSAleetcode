class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>ans;
        for(int i=0;i<target.size();i++)
        {   int count=0;
            int coo=0;
            for(int k=0;k<target.size();k++)
            {
                if(target[i]==target[k])
                coo++;
            }
            for(int j=0;j<s.size();j++)
            {
                if(target[i]==s[j])
                count++;
            }
            count=count/coo;
            ans.push_back(count);
        }
        int b=INT_MAX;
        for(int h=0;h<ans.size();h++)
        {
            if(ans[h]<b)
            b=ans[h];
        }
        return b;
        
    }
};