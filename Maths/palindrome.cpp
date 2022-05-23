class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0&&x<10)
            return true;
        else if(x<0)
            return false;
        else
        {
           long r_temp=0;
            long temp=(long)x;
            while(temp)
            {
                long r=temp%10;
                r_temp=r_temp*10+r;
                temp/=10;
            }
            if(r_temp==long(x))
                return  true;
            else 
                return false;
        }
    }
};