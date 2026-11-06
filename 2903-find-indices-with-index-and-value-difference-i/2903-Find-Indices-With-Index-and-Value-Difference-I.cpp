class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                int b=i-j;
                if(b<0)
                b=-b;
                int c=nums[i]-nums[j];
                if(c<0)
                c=-c;
                if(b>=indexDifference && c>=valueDifference)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};