class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string ans="";
        int m=200;
        for(int i=0;i<strs.size();i++)
        {int x=strs[i].length();
           m=min(m,x); 
        }
        for(int i=0;i<m;i++)
        { char ch=strs[0].at(i);
         for(int j=1;j<strs.size();j++)
        {
         if(ch!=strs[j].at(i))
             return ans;
                  
        } 
         ans=ans+ch;
        }
        return ans; 
    }
};