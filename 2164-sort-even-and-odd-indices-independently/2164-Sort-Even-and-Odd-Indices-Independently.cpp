class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int i=0;i<(nums.size()-1)/2;i++)
        {
        for(int i=0;i<nums.size()-2;i=i+2)
        {   if(nums[i]>nums[i+2])
        {
            swap(nums[i],nums[i+2]);
        }

        }
        }
        for(int i=0;i<(nums.size()-1)/2;i++)
        {
        for(int i=1;i<nums.size()-2;i=i+2)
        {   if(nums[i]<nums[i+2])
        {
            swap(nums[i],nums[i+2]);
        }

        }
        }
        return nums;
        
    }
};