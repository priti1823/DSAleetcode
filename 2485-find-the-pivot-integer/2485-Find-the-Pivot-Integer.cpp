class Solution {
public:
    int pivotInteger(int n) {
      float x= sqrt(n*(n+1)/2);
      for(int i=1;i<=n;i++)
      {
        if(x==i)
        return x;
      }
      return -1;
        
    }
};