class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans1;
        int j=0;
        while(j<matrix[0].size())
        { vector<int>ans;
        for(int i=matrix.size()-1;i>=0;i--)
        {
            
            ans.push_back(matrix[i][j]);
        }
        j++;
        ans1.push_back(ans);
        }
        for(int i=0;i<ans1.size();i++)
        {
            for(int j=0;j<ans1[i].size();j++)
            {
                matrix[i][j]=ans1[i][j];
            }
        }
        
    }
};