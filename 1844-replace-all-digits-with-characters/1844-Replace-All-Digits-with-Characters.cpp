class Solution {
public:
    string replaceDigits(string s) {
        for(int i=1;i<s.size();i++)
        {
            
            if(s[i]=='1')
            {
                s[i]=s[i-1]+('1'-'0');
            }
            else if(s[i]=='2')
            {
                s[i]=s[i-1]+('2'-'0');
            }
            else if(s[i]=='3')
            {
                s[i]=s[i-1]+('3'-'0');
            }
            else if(s[i]=='4')
            {
                s[i]=s[i-1]+('4'-'0');
            }
            else if(s[i]=='5')
            {
                s[i]=s[i-1]+('5'-'0');
            }
            else if(s[i]=='6')
            {
                s[i]=s[i-1]+('6'-'0');
            }
            else if(s[i]=='7')
            {
                s[i]=s[i-1]+('7'-'0');
            }
            else if(s[i]=='8')
            {
                s[i]=s[i-1]+('8'-'0');
            }
            else if(s[i]=='9')
            {
                s[i]=s[i-1]+('9'-'0');
            }
            else if(s[i]=='0')
            {
                s[i]=s[i-1];
            }
        }
        return s;
    }
};