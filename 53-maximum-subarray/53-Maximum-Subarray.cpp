class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int prefix;
        for(int i=0;i<nums.size();i++)
        {    prefix+=nums[i];
            sum=max(sum,prefix);
            if(prefix<0)
            prefix=0;

        }
        return sum;

        
    }
};