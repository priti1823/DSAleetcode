class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int start=0;
        int end=start+1;
        while(start<end)
        {
            if(nums[start]==nums[end])
            {
                start=start+2;
                end=start+1;
            }
            else if(nums[start]!=nums[end])
            {
                return nums[start];
            }
        }
        return nums[start];
    }
};