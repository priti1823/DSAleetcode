class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=0;j<nums.size()-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                swap(nums[j],nums[j+1]);
            }
        }
        int pre=0;
        int c=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {   int count=0;
            if(nums[i]%2==0)
            {
                for(int j=0;j<nums.size();j++)
                {
                    if(nums[i]==nums[j])
                    count++;
                    
                }
            }
            if(count>pre)
            {
            pre=count;
            c=i;
            }
        }
        if(c==INT_MIN)
        return -1;
        int b=nums[c];
        return b;

        
    }
};