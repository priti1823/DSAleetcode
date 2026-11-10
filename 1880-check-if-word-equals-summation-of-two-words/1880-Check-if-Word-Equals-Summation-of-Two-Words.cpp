class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        for(int i=0;i<firstWord.size();i++)
        {
            firstWord[i]=firstWord[i]-97+'0';
        }
        for(int i=0;i<secondWord.size();i++)
        {
            secondWord[i]=secondWord[i]-97+'0';
        }
        for(int i=0;i<targetWord.size();i++)
        {
            targetWord[i]=targetWord[i]-97+'0';
        }
        int a=stoi(firstWord);
        int b=stoi(secondWord);
        int c=stoi(targetWord);
        if(a+b==c)
        return 1;
        return 0;
    }
};