class Solution {
public:
    bool isBalanced(string num) {
        int sum=0;
        int sum1=0;
        for(int i=0;i<num.size();i=i+2)
        {
            int b=num[i]-'0';
            sum=sum+b;
        } for(int i=1;i<num.size();i=i+2)
        {
            int b=num[i]-'0';
            sum1=sum1+b;
        }
        if(sum==sum1)
        return 1;
        return 0;
        
    }
};