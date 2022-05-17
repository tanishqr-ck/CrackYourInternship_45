class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int a[n+1];
        memset(a,0, sizeof(a));
        for(int i=0;i<n;i++)
        {
        a[nums[i]]+=1;
            if(a[nums[i]]==2)
                ans.push_back(nums[i]);
        }
        return ans;
        
    }
};