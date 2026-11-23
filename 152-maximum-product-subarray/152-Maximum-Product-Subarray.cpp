class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=nums[0];
        for(int i=0;i<nums.size();i++)
        {    int b=1;
            for(int j=i;j<nums.size();j++)
            {   b=b*nums[j];
                if(b>pre)
                pre=b;
                
            }
        }
        return pre;
        
    }
};