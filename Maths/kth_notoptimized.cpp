class Solution {
public:
    int kthFactor(int n, int k) {
        int i=1;
        while(k&&i<=n)
        {
            if(n%i==0)
            {
                k--;
            }
            i++;
        }
        if(k>0)
            return -1;
        else
            return (i-1);
    }
};