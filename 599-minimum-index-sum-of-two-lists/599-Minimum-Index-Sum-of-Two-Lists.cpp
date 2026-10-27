class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>ans;
        int b=INT_MAX;
        int l=0;
        int m=0;
        for(int i=0;i<list1.size();i++)
        {
            for(int j=0;j<list2.size();j++)
            {
                if(list1[i]==list2[j])
                {
                    int k=i+j;
                    if(k<b)
                    {   l=i;
                        b=k;
                        
                    }
                    else if(k==b)
                    {ans.push_back(list1[i]);
                    
                    }
                    
                    
                }
                
            }
            

        }
        ans.push_back(list1[l]);
       
        
        return ans;
    }
};