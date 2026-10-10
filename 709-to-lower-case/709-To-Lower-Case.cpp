class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            s[i]=tolower(c);
        }
        return s;
    }
};