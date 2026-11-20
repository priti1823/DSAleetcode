class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>ans;
        int count=INT_MAX;
        int b=0;
        int a=0;
        int l=0;
        int o=0;
        int n=0;
        for(int i=0;i<text.size();i++)
        {   if(text[i]=='b')
             {  b++;

            }
             else if(text[i]=='a')
             {  a++;

            }
             else if(text[i]=='l')
             {  l++;

            }
             else if(text[i]=='o')
             {  o++;

            }
             else if(text[i]=='n')
             {  n++;

            }

        }
        l=l/2;
        o=o/2;
        ans.push_back(b);
        ans.push_back(a);
        ans.push_back(l);
        ans.push_back(o);
        ans.push_back(n);
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]<count)
            count=ans[i];
        }

      
        return count;
    }
};