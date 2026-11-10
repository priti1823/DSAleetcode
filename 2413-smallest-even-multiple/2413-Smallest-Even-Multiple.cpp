class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2!=0)
        {
            int b=n*2;
            return b;
        }
        return n;
        
    }
};