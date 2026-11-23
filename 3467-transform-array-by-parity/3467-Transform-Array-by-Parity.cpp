class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            count++;
        }
        for(int j=0;j<count;j++)
        {
            ans.push_back(0);
        }
        for(int k=count;k<nums.size();k++)
        {
            ans.push_back(1);
        }
        return ans;
        
    }
};