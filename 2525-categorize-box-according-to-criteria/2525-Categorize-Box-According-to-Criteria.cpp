class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        long long volume=1LL*length*width*height;
        int flag=0;
        int heavy=0;
        if(length>=10000||width>=10000||height>=10000||mass>=10000||volume>=1000000000)
        {
            flag++;
        }
        if(mass>=100)
        {
            heavy++;
        }
        if(flag!=0 && heavy!=0)
        return "Both";
        else if(flag==0 && heavy==0)
        return "Neither";
        else if(flag!=0 && heavy==0)
        return "Bulky";
        else
        return "Heavy";

        
    }
};