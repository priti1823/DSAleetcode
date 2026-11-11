class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end)
        {  int flag=0;
           int floo=0;
           int b=s[start];
           int c=s[end];
           for(int i=65;i<=90;i++)
           {
            if(b==i)
            flag++;
           }
           for(int i=97;i<=122;i++)
           {if(b==i)
            flag++;
            
           }
           for(int i=65;i<=90;i++)
           {
            if(c==i)
            floo++;
           }
           for(int i=97;i<=122;i++)
           {if(c==i)
            floo++;
            
           }
           if(flag!=0 && floo!=0)
           {
            swap(s[start],s[end]);
            start++;
            end--;
           }
           else if(flag!=0 && floo==0)
           {
            end--;
           }
           else
           start++;
        }
        return s;
        
    }
};