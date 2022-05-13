class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i=0,j=1;int pr=0;
        while(i<j&&j<a.size())
        {
            if(a[i]>a[j])
            {
                i=j;
                j++;
            }
            else{
                pr=max(pr,a[j]-a[i]);
                j++;
                }
        }
        return pr;
        
    }
};