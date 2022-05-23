class Solution {
public:
    bool isHappy(int n) {
        
        while(n>=10)
        {
            int d=0;
           while(n)
           {
             int r=n%10;
               d+=r*r;
               n/=10;
           }
            n=d;
        }
        if(n==1||n==7)
            return true;
        else
            return false;
    }
};