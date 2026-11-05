class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            int b=s[i];
            int c=s[i+1];
            int ans=b-c;
            if(ans<0)
            ans=-ans;
            sum=sum+ans;
        }
        return sum;
        
    }
};