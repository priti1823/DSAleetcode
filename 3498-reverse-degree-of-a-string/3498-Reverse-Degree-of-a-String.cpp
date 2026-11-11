class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=1;i<=s.size();i++)
        {
            int b=123-s[i-1];
            int ans=b*i;
            sum+=ans;
        }
        return sum;
        
    }
};