class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int oper=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[i]=nums[i];
            }
            else if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int pow=0;
        for(int i=0;i<nums.size();i++)
        {   if(nums[i]!=0)
          {
            nums[pow]=nums[i];
            pow++;
          }

        }
        for(int j=pow;j<nums.size();j++)
        {    nums[j]=0;

        }
       return nums; 
    }
};