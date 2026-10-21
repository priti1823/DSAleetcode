class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans=0;
        for(int i=0;i<words1.size();i++)
        {
            int count=0;
            int count1=0;
            for(int k=0;k<words1.size();k++)
            {
                if(words1[i]==words1[k])
                {
                    count1++;
                }
            }
            for(int j=0;j<words2.size();j++)
            {
                if(words1[i]==words2[j])
                {
                    count++;
                }
            }
            if(count==1&& count1==1)
            {
                 ans++;
            }
        }
        return ans;
    }
};