class Solution {
public:
    int hammingWeight(int n) {
        vector<char>ans;
        while(n>0)
        {
            int digit=n%2;
            n=n/2;
            char b=digit+'0';
            ans.push_back(b);
        }
        int count=0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]=='1')
            count++;
        }
        return count;
    }
};