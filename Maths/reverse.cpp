class Solution {
public:
    int reverse(int x) {
        int f=0;
        if(x==INT_MIN)
        {
            return 0;
        }
        if(x<0){
            f=1;
        x=x *-1;}
        int ans=0;
        
        while(x!=0)
        {int d=floor(log10(x)+1);
            int r=x%10;
            if(ans!=0&&INT_MAX/ans>=10&&INT_MAX-ans*10>=r)
                ans=ans*10+r;
         else if(ans==0)
             ans=ans*10+r;
         else
             return 0;
         x=x/10;
        }
        if(f)
            ans*=-1;
        return ans;
    }
};