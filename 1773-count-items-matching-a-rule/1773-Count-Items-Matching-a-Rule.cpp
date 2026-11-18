class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int b=0;
        int count=0;
        if(ruleKey=="type")
        {   b=0;

        }
        else if(ruleKey=="color")
        {   b=1;

        }
        else if(ruleKey=="name")
        {   b=2;

        }
        for(int i=0;i<items.size();i++)
        {   
           if( items[i][b]==ruleValue)
           count++;
        }
        return count;
        
    }
};