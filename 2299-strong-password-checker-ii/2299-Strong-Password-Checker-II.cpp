class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int flag=0;
        int foo=0;
        int digi=0;
        int special=0;
        if(password.size()<8)
        {
            return 0;

        }
        for(int i=0;i<password.size()-1;i++)
        {
            if(password[i]==password[i+1])
            return 0;
        }
        for(int i=0;i<password.size();i++)
        {
            int b=password[i];
            for(int j=65;j<=90;j++)
            {    if(b==j)
                 flag++;
            }
            for(int k=97;k<=122;k++)
            {
                if(b==k)
                foo++;
            }
            for(int m=32;m<=47;m++)
            {
                if(b==m)
                special++;
            }
            for(int m=58;m<=64;m++)
            {
                if(b==m)
                special++;
            }
            for(int m=91;m<=96;m++)
            {
                if(b==m)
                special++;
            }for(int m=123;m<=126;m++)
            {
                if(b==m)
                special++;
            }
            for(int m=48;m<=57;m++)
            {
                if(b==m)
                digi++;
            }
        }
        if( flag==0||foo==0||digi==0||special==0)
        return 0;
        return 1;
        
    }
};