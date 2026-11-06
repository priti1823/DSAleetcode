class Solution {
public:
    int firstMatchingIndex(string s) {
        if(s.size()==1)
        return 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[s.size()-1-i])
            return i;
        }
        return -1;
    }
};