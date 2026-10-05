class Solution {
public:
    int maximumDifference(vector<int>& nums) {
          int pre=0;
          int newsub=0;
        for(int i=0;i<nums.size()-1;i++)
        {    int sub=0;
            for(int j=i+1;j<nums.size();j++)
            {
            if(nums[i]<nums[j])
            {   
                newsub=nums[j]-nums[i];
                if(newsub>sub)
                {
                    sub=newsub;
                }
                 
            }
             
            }
            if(sub>pre)
            {
                pre=sub;
            }
        }
        if(pre==0)
        {
            return -1;
        }
        return pre;
        
    }
};