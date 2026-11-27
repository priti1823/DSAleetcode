class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        
        int pre=0;
        for(int i=0;i<arr.size();i++)
        {  int count=0;
           int b=arr[i];
           while(b>0)
           {
            int digit=b%2;
            b=b/2;
            if(digit==1)
            count++;
           }
           ans.push_back(count);
           if(count>pre)
           pre=count;

        }
        vector<int>ann;
        for(int i=0;i<=pre;i++)
        {  vector<int>ans1;
        for(int j=0;j<ans.size();j++)
        {
            if(ans[j]==i)
            ans1.push_back(arr[j]);
            
        }
        sort(ans1.begin(),ans1.end());
        for(int k=0;k<ans1.size();k++)
        {
              ann.push_back(ans1[k]);
        }
        
        }
        return ann;

        
    }
};