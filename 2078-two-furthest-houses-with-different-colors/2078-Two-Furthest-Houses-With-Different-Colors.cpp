class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int pre=0;
        for(int i=0;i<colors.size()-1;i++)
        {   
            for(int j=i+1;j<colors.size();j++)
            {
                if(colors[i]!=colors[j])
                {
                    int b=i-j;
                    if(b<0)
                    b=-b;
                    if(b>pre)
                    pre=b;
                }
            }
        }
        return pre;
    }
};