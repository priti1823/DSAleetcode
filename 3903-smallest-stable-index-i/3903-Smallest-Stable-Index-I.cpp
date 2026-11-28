class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int pre=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {   int b=INT_MIN;
            int c=INT_MAX;
            for(int j=0;j<=i;j++)
            {     if(nums[j]>b)
                   b=nums[j];

            }
            for(int k=i;k<nums.size();k++)
            {
                if(nums[k]<c)
                  c=nums[k];
            }
            int ans=b-c;
            if(ans<=k)
            {   
                m=i;
                break;
                
            }
        }
        if(m==INT_MIN)
        return -1;
        return m;
        
    }
};