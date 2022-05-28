class Solution {
public:
    int maxScore(vector<int>& a, int k) {
     int sum=0;int n=a.size();
        for(int i=0;i<k;i++)
       sum+=a[i];
        if(k==n)
            return sum;
        int x=0;
        int ans=sum;int c=0;
        for(int i=k-1;i>=0;i--)
        {
            x+=a[n-1-c],sum-=a[i];
            ans=max(ans,sum+x);
            c++;
        }
        return ans;
    }
};