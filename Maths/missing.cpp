class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ex=n*(n+1)/2;
        int ac=0;
        for(auto a:nums)
        {
            ac+=a;
        }
        return ex-ac;
    }
};