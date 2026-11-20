class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int b=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                int c=i-start;
                if(c<0)
                c=-c;
                if(c<b)
                b=c;
            }
        }
        return b;
        
    }
};