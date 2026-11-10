class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int d=arr[i]-arr[j];
                if(d<0)
                d=-d;
                if(d<=a)
                {
                    for(int k=j+1;k<arr.size();k++)
                    {
                        int h=arr[j]-arr[k];
                        if(h<0)
                        h=-h;
                        if(h<=b)
                        {
                            int m=arr[i]-arr[k];
                            if(m<0)
                            m=-m;
                            if(m<=c)
                            {
                                count++;
                            }
                        }
                    }
                }

            }
        }
        return count;
    }
};