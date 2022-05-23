class Solution {
public:
    int maxPoints(vector<vector<int>>& a) {
       if(a.size()<=2)
           return a.size();
        int n=a.size();
        int m=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int t=2;
                for(int k=0;k<n;k++)
                {
                    if(k!=i&&k!=j&&((a[k][1]-a[i][1])*(a[j][0]-a[i][0])-(a[j][1]-a[i][1])*(a[k][0]-a[i][0]))==0)
                        t++;
                        
                }
                m=max(m,t);
            }
        }
        return m;
    }
};