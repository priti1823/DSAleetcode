class Solution {
public:
    string getEncryptedString(string s, int k) {
        vector<char>ans;
        for(int i=0;i<s.size();i++)
        {
            ans.push_back(s[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            s[i]=ans[(i+k)%s.size()];
        }
        return s;
        
    }
};