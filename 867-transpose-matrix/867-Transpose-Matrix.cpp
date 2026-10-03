class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix[0].size());
        for(int i=0;i<matrix[0].size();i++)
        {
            vector<int>ans1(matrix.size());
            for(int j=0;j<matrix.size();j++)
            {
                ans1[j]=matrix[j][i];
               
                
            }
             
            ans[i]=ans1;

        }
        return ans;
    }
};