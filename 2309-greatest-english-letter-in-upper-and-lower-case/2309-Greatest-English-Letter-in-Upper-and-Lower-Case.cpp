class Solution {
public:
    string greatestLetter(string s) {
        int pre=0;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            int b=s[i];
            for(int j=0;j<s.size();j++)
            {
                int c=s[j];
                if(b-c==32)
                {  char b=s[j];
                  if(c>pre)
                  {
                    pre=c;
                  }
                   

                }
                else if(b-c==-32)
                {
                 
                  if(b>pre)
                  {
                    pre=b;
                  }
                   
                }

            }
        }
        if(pre!=0)
        {
        char d=pre;
        ans.push_back(d);
        }
        return ans;
    }
};