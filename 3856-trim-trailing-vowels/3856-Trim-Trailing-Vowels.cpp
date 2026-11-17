class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans;
        int start=0;
        for(int i=s.size()-1;i>=0;i--)
        {    int b=s[i];
            if(b==97||b==101||b==105||b==111||b==117)
            {
                start++;
            }
            else
            break;
        }
        for(int i=0;i<s.size()-start;i++)
        {
            ans.push_back(s[i]);
        }
        return ans;

        
    }
};