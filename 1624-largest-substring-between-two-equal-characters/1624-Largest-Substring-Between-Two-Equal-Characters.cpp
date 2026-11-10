class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int pre=-1;
        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    int count=j-i-1;
                    if(count>pre)
                    pre=count;
                    
                }
            }
        }
        return pre;
    }
};