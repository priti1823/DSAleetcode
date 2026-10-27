class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for(int i=0;i<target.size();i++)
        {   int flag=0;
            int count=0;
           for(int k=0;k<target.size();k++)
           {
            if(target[i]==target[k])
            count++;
           }
            for(int j=0;j<arr.size();j++)
            {
                if(target[i]==arr[j])
                flag++;
            }
            if(flag==0)
            return 0;
            else if(flag!=count)
            {
                return 0;
            }
        }
        return 1;
    }
};