class Solution {
public:
    string removeTrailingZeros(string num) {
        for(int i=num.size()-1;i>=0;i--)
        {
            if(num[i]=='0')
            {
                num.erase(num.begin()+i);
            }
            else if(num[i]!='0')
            {
                return num;
            }
        }
       return num; 
    }
};