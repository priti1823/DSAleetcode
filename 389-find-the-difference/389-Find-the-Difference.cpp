class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        int sum1=0;
      for(int i=0;i<s.size();i++)
      {   sum=sum+s[i];
        
      }
      for(int i=0;i<t.size();i++)
      {   sum1=sum1+t[i];
        
      }
      int ans=sum1-sum;
      char d=ans;
      return d;
        
    }
};