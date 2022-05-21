class Solution {
public:
    string reverseWords(string s) {
        s=s+' ';
       int l=s.length();
       string st="";
      stack<string> a;
      for(int i=0;i<l;i++)
      {
          if(s.at(i)!=' ')
              st+=s.at(i);
          else
          {    if(st.length()>0)
              a.push(st);
              st="";
              
          }
      }
        string ans="";
        while(a.size()!=0){
          ans+=a.top();
            if(a.size()!=1)
                ans+=" ";
            
            a.pop();
        }
        return ans;
    }
};