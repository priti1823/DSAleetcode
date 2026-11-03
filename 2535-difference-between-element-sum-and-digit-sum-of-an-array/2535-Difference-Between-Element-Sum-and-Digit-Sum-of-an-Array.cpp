class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int soo=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            int b=nums[i];
            while(b>0)
            {
                int digit=b%10;
                b=b/10;
                soo=soo+digit;
            }
        }
        int ans=sum-soo;
        if(ans<0)
        ans=-ans;
        return ans;
        
    }
};