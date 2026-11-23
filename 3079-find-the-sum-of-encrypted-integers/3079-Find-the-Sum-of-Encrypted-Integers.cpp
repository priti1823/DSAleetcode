class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {   int pre=0;
            int b=nums[i];
            int c=nums[i];
            int ans=0;
            while(b>0)
            {
                int digit=b%10;
                b=b/10;
                pre=max(pre,digit);
            }
            while(c>0)
            {
                int digit=c%10;
                if(digit!=pre)
                digit=pre;
                ans=ans*10+digit;
                c=c/10;
            }
            sum=sum+ans;

        }
        return sum;
        
    }
};