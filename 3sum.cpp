class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<pair<int,int>> s;
        vector<vector<int>> r;
        for(int i=0;i<nums.size();i++)
        {
            s.push_back({nums[i],i});
        }
        sort(s.begin(),s.end());
        int target=0;int n=nums.size();
       for(int i=0;i<=n-3;i++)
       {
           if(i!=0&&s[i].first==s[i-1].first)
               continue;
           target=0-s[i].first;
          int j=i+1,k=n-1;
           while(j<k)
           {
               if(s[j].first+s[k].first>target)
                k--;
            else if(s[j].first+s[k].first<target)
                j++;
            else
            {
               
               r.push_back({s[i].first,s[j].first,s[k].first});
              while(j<k&&s[j].first==s[j+1].first)
                  j++;
                while(j<k&&s[k].first==s[k-1].first)
                  k--;
                j++;k--;
               
           }
           
       }
       
        
    }
         return r;
       
    }
};