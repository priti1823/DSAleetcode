class Solution {
public:
    bool detectCapitalUse(string word) {
        int found=0;
        int found1=0;
        int m=0;
        for(int i=0;i<word.size();i++)
        {
            int c=word[i];
            for(int j=65;j<=90;j++)
            {     if(c==j)
                  {
                  found++;
                   m=i;
                  }
            }
             for(int k=97;k<=122;k++)
            {
                  if(c==k)
                  {
                  found1++;
                  
                  }
                  
            }
        }
        if(found1==0)
        {
            return 1;
        }
        else if(found==0)
        {
            return 1;
        }
        else if(found==1 && m==0)
        {
            return 1;
        }
        return 0;
    }
};