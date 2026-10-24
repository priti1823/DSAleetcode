class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int flag=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            { count++;
            flag++;
                
            }
            else if(s[i]==' '&& flag!=0)
            {
                break;
            }
        }
        return count;
    }
};