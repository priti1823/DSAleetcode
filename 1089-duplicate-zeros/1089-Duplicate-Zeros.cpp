class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>ans;
        int start=0;
        while(ans.size()<=arr.size())
        {
            if(arr[start]!=0)
            {
                ans.push_back(arr[start]);
            }
            else if(arr[start]==0)
            {ans.push_back(0);
            ans.push_back(0);
            }
            start++;
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=ans[i];
        }
        
    }
};