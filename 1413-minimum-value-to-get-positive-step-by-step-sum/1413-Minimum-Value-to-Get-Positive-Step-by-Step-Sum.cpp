class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int>ans;
        int start=1;
        int h=start;
        int flag=1;
        while(flag!=0)
        {    flag=0;
            for(int i=0;i<nums.size();i++)
            {
                int b=h+nums[i];
                h=b;
                if(b<1)
                flag++;

                

            }
            if(flag==0)
            return start;
            start++;
            h=start;
           
        }
        return start;
        
    }
};