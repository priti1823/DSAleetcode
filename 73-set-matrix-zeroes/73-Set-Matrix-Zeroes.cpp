class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                   ans.push_back(j);
                }
            }
        
        }
        for(int i=0;i<matrix.size();i++)
        {   int flag=0;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                { flag++;
                   
                }
            }
            if(flag!=0)
            {
                for(int k=0;k<matrix[i].size();k++)
                {
                    matrix[i][k]=0;
                }
            }
        
        }
        for(int j=0;j<ans.size();j++)
        { int b=ans[j];
        for(int i=0;i<matrix.size();i++)
           {matrix[i][b]=0;

           }
        }
        
    }
};