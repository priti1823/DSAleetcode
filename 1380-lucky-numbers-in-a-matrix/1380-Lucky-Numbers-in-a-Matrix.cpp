class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>ans;
        int d=0;
          int c=INT_MAX;
        for(int i=0;i<matrix.size();i++)
        {   c=INT_MAX;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<c)
                {
                c=matrix[i][j];
                d=j;
                }
            }
            int flag=0;
            for(int k=0;k<matrix.size();k++)
            {
                if(matrix[k][d]>c)
                flag++;
            }
            if(flag==0)
            {
                ans.push_back(c);
            }
            
        }
        
        return ans;
    }
};