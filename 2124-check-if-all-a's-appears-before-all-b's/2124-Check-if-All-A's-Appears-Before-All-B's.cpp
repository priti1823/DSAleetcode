class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b'&& i+1<s.size())
            {  for(int j=i+1;j<s.size();j++)
                 {
                if(s[j]=='a')
                {
                    return 0;
                }
                }

            }
        }
        return 1;
        
    }
};