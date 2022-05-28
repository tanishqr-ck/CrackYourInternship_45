class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0;
        int sum=0;
        unordered_map<int,int> rf;
        rf[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            int r=sum%k;
            if(r<0)
                r+=k;
            auto it=rf.find(r);
            if(it!=rf.end())
            {
                ans+=it->second;
                it->second++;
              
            }
            else{
                rf[r]=1;
            }
           
        }
     
        return ans;
    }
};