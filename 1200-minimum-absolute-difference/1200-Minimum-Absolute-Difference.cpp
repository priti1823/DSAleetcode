class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
       
        sort(arr.begin(),arr.end());
        int b=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            int c=arr[i+1]-arr[i];
            if(c<b)
            b=c;
        }
        for(int i=0;i<arr.size()-1;i++)
        {    vector<int>ans1;
           
                int h=arr[i+1]-arr[i];
                if(h==b)
                {
                    ans1.push_back(arr[i]);
                    ans1.push_back(arr[i+1]);
                    ans.push_back(ans1);
                    
                }

            
            
        }
        return ans;
        
    }
};