class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int c=INT_MAX;
        int d=INT_MAX;
        for(int i=0;i<nums1.size();i++)
        {
            if(nums1[i]<c)
            c=nums1[i];
        }
         for(int i=0;i<nums2.size();i++)
        {
            if(nums2[i]<d)
            d=nums2[i];
        }
        int ans=d-c;
        return ans;
    }
};