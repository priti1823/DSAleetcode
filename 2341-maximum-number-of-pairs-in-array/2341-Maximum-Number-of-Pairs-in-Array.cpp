class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>ans;
        for(int i=0; i<nums.size()-1;i++)
        {     for(int j=0; j<nums.size()-i-1;j++)
              {  if(nums[j]>nums[j+1])
              {
                swap(nums[j],nums[j+1]);
              }

               }

        }
        int pairs=0;
        int rem=0;
        for(int i=0; i<nums.size();i++)
        {  int counter=0;
          if(i+1<nums.size()&& nums[i]!=nums[i+1]||i==nums.size()-1)
          {
           for(int j=0; j<nums.size();j++)
           {  if(nums[i]==nums[j])
           {
               counter++;
           }

           }
          }
           int b=counter/2;
           pairs=pairs+b;
           rem=rem+counter%2;

           
        }
        
        ans.push_back(pairs);
        ans.push_back(rem);
        return ans;
    }
};