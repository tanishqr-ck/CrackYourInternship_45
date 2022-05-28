class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> h;
       h[0]=1;
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            auto it=h.find(sum-k);
            if(it!=h.end())
         ans+=it->second;
         h[sum]++;
        }
        return ans;
    }
};