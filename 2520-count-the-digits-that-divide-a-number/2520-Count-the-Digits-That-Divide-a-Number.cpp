class Solution {
public:
    int countDigits(int num) {
        int b=num;
        int count=0;
        while(num>0)
        {
            int digit=num%10;
            num=num/10;
            if(b%digit==0)
            count++;
        }
        return count;
        
    }
};