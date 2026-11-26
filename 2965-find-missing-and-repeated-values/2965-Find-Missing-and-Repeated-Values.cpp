class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans1;
        vector<int>ans;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {  ans.push_back(grid[i][j]);

            }
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]==ans[i+1])
            ans1.push_back(ans[i]);
        }
        for(int i=1;i<=n*n;i++)
        {    int count=0;
            for(int j=0;j<ans.size();j++)
            {
                if(i==ans[j])
                count++;
            }
            if(count==0)
            ans1.push_back(i);

        }
        return ans1;

        
    }
};