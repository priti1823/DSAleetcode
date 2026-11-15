class Solution {
public:
    int findClosest(int x, int y, int z) {
        int step=0;
        int stop=0;
        if(x<z)
        {
            while(x!=z)
            {
                x++;
                step++;
            }
        }
         else if(x>z)
        {
            while(x!=z)
            {
                x--;
                step++;
            }
        }
        if(y<z)
        {
            while(y!=z)
            {
                y++;
                stop++;
            }
        }
       
        else if(y>z)
        {
            while(y!=z)
            {
                y--;
                stop++;
            }
        }
        if(step<stop)
        return 1;
        else if(step>stop)
        return 2;
        return 0;
        
    }
};