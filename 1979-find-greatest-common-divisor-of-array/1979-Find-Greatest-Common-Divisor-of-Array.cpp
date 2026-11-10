class Solution {
public:
    int findGCD(vector<int>& nums) {
        int b=INT_MIN;
        int c=INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>b)
            b=nums[i];
            if(nums[i]<c)
            c=nums[i];
        }
        for(int i=1;i<=b;i++)
        {
            if(b%i==0 && c%i==0)
            {
               ans=i;
            }
        }
        return ans;
    }
};