class Solution {
public:
    bool halvesAreAlike(string s) {
        int count=0;
        for(int i=0;i<s.size()/2;i++)
        {   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           {
            count++;
           }
           else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
           count++;
            
        }
          int cou=0;
        for(int i=s.size()/2;i<s.size();i++)
        {   if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           {
            cou++;
           }
           else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
           cou++;
            
        }
        if(count==cou)
        return 1;
        return 0;
        
    }
};