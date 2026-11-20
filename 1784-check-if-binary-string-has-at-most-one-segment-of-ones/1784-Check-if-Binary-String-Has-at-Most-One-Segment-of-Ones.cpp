class Solution {
public:
    bool checkOnesSegment(string s) {
        int b=0;
        for(int i=s.size()-1;i>=0;i--)
        {     if(s[i]=='1')
        {
              b=i;
              break;
        }
            
        }
      
        for(int j=b;j>=0;j--)
        {
            if(s[j]=='0')
            return 0;
        }
        return 1;
    }
};