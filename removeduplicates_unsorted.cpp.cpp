class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k=0;
        for(int i=1;i<nums.size();i++)
    {
        bool f=false;
        int l=0,u=k;
        while(l<=u)
        {
            int mid=l+(u-l)/2;
            if(nums[mid]==nums[i])
            {
                f=true;
                break;
            }
            else if(nums[mid]>nums[i])
                u=mid-1;
            else
                l=mid+1;
        }
        if(f)
        continue;
            else
            {
                k++;
                nums[k]=nums[i];
                
            }
    }
        return k+1;
        
    }
};