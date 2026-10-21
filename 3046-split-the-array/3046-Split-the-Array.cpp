class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count>2)
            {
                return 0;
            }
        }
        return 1;
    }
};