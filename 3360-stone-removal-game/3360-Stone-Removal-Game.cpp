class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10)
        return 0;
        int b=10;
        int count=0;
        while(true)
        {   n=n-b;
            if(n<0)
            break;
            count++;
            b--;
            
            
            
        }
        if(count%2!=0)
        return 1;
        return 0;
        
    }
};