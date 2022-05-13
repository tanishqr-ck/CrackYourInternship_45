class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int i=0,j=nums.size()-1;
        vector<pair<int,int>> a;
        for(int i=0;i<nums.size();i++)
        {
            a.push_back({nums[i],i});
        }
        sort(a.begin(),a.end());
        while(i<j)
        {
            if(a[i].first+a[j].first==target){
                vector<int> ans={a[i].second,a[j].second};
        return ans;
               
            }
            if(a[i].first+a[j].first>target)
                j--;
            if(a[i].first+a[j].first<target)
                i++;
        }
        return {0,0};
    }
};