class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
        }
        if(sum%3!=0)
        return 0;
        int target=sum/3;
        int prefix=0;
        int flag=0;
        int c=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            prefix+=arr[i];
            
            if(prefix==target)
            { c=i;
                flag++;
              break;

            }
        }
        int suffix=0;
        int d=-1;
        if(flag!=0)
        { for(int i=c+1;i<arr.size()-1;i++)
        {
            suffix+=arr[i];
            
            if(target==suffix)
            { d=i;
              break;

            }
        }

        }
        int suuu=0;
        if(d!=-1)
        {
          return 1;
        }
        return 0;
        
    }
};