class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int a=nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                int b=nums[j];
                for(int k=j+1;k<nums.size();k++)
                { int c=nums[k];
                   int ans=a+b+c;
                   for(int m=k+1;m<nums.size();m++)
                   {
                    if(ans==nums[m])
                    count++;
                   }

                }
            }
        }
        return count;
    }
};