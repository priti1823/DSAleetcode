class Solution {
public:
    bool judgeCircle(string moves) {
        int co=0;
        int cou=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            {
                co++;
            }
            else if(moves[i]=='D')
            {
                co--;
            }
            else if(moves[i]=='L')
            {
                cou++;
            }
            else if(moves[i]=='R')
            {
                cou--;
            }
        }
        if(co==0 && cou==0)
        {
            return 1;
        }
        return 0;
    }
};