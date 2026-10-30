class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            int count=0;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                count++;
            }
            if(count!=0)
            {   int coo=0;
                int flag=0;
                for(int k=0;k<nums1.size();k++)
                {
                    if(nums1[i]==nums1[k])
                    coo++;
                }
                for(int l=0;l<ans.size();l++)
                {
                    if(ans[l]==nums1[i])
                    flag++;
                }
                if(flag==0)
                {
                    int b=min(count,coo);
                    while(b>0)
                    {
                        ans.push_back(nums1[i]);
                        b--;
                    }
                }
            }

        }
        return ans;
    }
};