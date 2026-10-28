class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans;
        int c=INT_MIN;
        int m=0;
        for(int i=0;i<mat.size();i++)
        {   int count=0;
            for(int j=0;j<mat[i].size();j++)
            {    if(mat[i][j]==1)
                 {count++;

                 }

            }
            if(count>c)
            {
                c=count;
                m=i;
            }
        }
        ans.push_back(m);
        ans.push_back(c);
        return ans;
    }
};