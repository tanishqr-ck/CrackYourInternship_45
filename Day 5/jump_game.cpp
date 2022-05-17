class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
        int i=n-2;
        int j=n-1;
        while(i>=0)
        {
            if(nums[i]>=(j-i))
            {
                j=i;
                i--;
            }
            else
            {
                i--;
            }
        }
        if(j==0)
            return true;
        else
            return false;
    }
};