class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i=a[0],j=0,m=0,profit=0;
        for(int k=0;k<a.size();k++)
        {
            if(a[k]<i)
                i=a[k];
            else
            {
                j=a[k];
                m=j-i;
            }
            profit=max(profit,m);
        }
      return profit; }
};