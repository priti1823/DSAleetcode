class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++)
        {   int prefix=0;
            for(int j=i;j<=i+1;j++)
            {
                prefix+=nums[j];
            }
            ans.push_back(prefix);
        }
        for(int i=0;i<ans.size();i++)
        {
            int count=0;
            for(int j=0;j<ans.size();j++)
            {
                if(ans[i]==ans[j])
                count++;
            }
            if(count>=2)
            return 1;
        }
        return 0;
    }
};