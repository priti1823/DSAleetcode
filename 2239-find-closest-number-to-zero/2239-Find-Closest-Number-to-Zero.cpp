class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int c=0;
        int pre=abs(nums[0]);
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]<0)
            {    c=abs(nums[i]);

            }
            c=abs(nums[i]);
            if(c<pre)
            {
                pre=c;
            }
        }
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==pre)
            {
                return nums[i];
            }
        }
        return -pre;
        
    }
};