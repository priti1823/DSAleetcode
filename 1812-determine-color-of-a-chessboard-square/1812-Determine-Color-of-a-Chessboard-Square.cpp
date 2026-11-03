class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int ans=0;
         char b;
        for(int i=0;i<2;i++)
        {
             b=coordinates[0];
            ans=coordinates[1]-'0';
        }
        if(b=='a'||b=='c'||b=='e'||b=='g')
        {
            if(ans%2!=0)
            return 0;
            else
            return 1;
        }
        else
        {
            if(ans%2!=0)
            return 1;
            else
            return 0;
        }
        return 0;
    }
};