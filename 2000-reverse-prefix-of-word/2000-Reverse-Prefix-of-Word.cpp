class Solution {
public:
    string reversePrefix(string word, char ch) {
        int b=0;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                b=i;
                break;
            }
        }
        for(int i=0;i<=b/2;i++)
        {
            swap(word[i],word[b-i]);
        }
        return word;
    }
};