class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int,int> aux;
        stack<int> temp;
        temp.push(nums2[0]);
        for(int i=1;i<nums2.size();i++)
        {
           while(!temp.empty()&&temp.top()<nums2[i])
           {
            aux[temp.top()]=nums2[i];
               temp.pop();
           }
            temp.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(aux[nums1[i]]==0)
            ans.push_back(-1);
            else
                ans.push_back(aux[nums1[i]]);
        }
        return ans;
        
    }
};