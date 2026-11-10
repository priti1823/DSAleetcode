class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left;
        vector<int>right;
        vector<int>ans(nums.size());
        int sum=0;
        left.push_back(0);
        for(int i=1;i<nums.size();i++)
        {    sum=0;
             for(int j=i-1;j>=0;j--)
            {sum+=nums[j];

            }
            left.push_back(sum);
            
        }
        for(int i=nums.size()-2;i>=0;i--)
        {   int sum=0;
            for(int j=i+1;j<nums.size();j++)
            {  sum+=nums[j];

            }
            right.push_back(sum);
        }
        sort(right.rbegin(),right.rend());
        right.push_back(0);
        for(int i=0;i<ans.size();i++)
        {
            int b=left[i]-right[i];
            if(b<0)
            b=-b;
            ans[i]=b;
        }
        return ans;
    }
};