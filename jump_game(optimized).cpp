class Solution {
public:
    bool canJump(vector<int>& nums) {
       int rem=nums[0];int n=nums.size();
     
        for(int i=1;i<n;i++)
        {
            if(rem==0)
                return false;
            if(rem<=nums[i])
                rem=nums[i];
            else
                rem--;
        }
            return true;
    }
};