class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         vector<vector<string>> ans;
        for(auto a : strs)
        {
            string m=a;
           
            int f=0;
            for(int i=0;i<ans.size();i++)
            {
                string st=ans[i][0];
                sort(st.begin(),st.end());
                sort(m.begin(),m.end());
                if(m==st)
                {
                    f=1;
                    
                    ans[i].push_back(a);
                    break;
                }
                
            }
            if(f==0)
            {
                vector<string> temp={a};
                ans.push_back(temp);
            }
        }
        return ans;
    }
};