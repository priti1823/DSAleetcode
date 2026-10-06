class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        vector<int>ans1;

        long long  int num=0;
        for(int i=0;i<=n;i++)
            

        {  int count=0;
             int c=i;
            num=0;
            while(c>0)
            {
            int d=c%2;
            if(d==1)
            {
             count++;
            }
            num=num*10+d;
            c=c/2;
            }
            ans.push_back(count);
        }
       return ans;
    }
};