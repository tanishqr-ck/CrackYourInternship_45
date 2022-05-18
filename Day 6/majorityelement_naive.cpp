class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> a;
        int m=n/2;
       for(int i=0;i<nums.size();i++)
       {
           a[nums[i]]++;
           if(a[nums[i]]>m)
               return nums[i];
       }
        return 0;
    }
};