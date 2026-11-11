class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int b=nums[i]-nums[j];
                if(b<0)
                b=-b;
                if(b==k)
                {
                    count++;
                }
            }
        }
        return count;
    }
};