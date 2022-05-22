class Solution {
public:
    string simplifyPath(string a) {
    string st="";
        a=a+"/";
        stack<string> s;
        for(int i=0;i<a.length();i++)
        {   
            if(a.at(i)!='/'){
            st+=a.at(i);
            }
            else
            {
              if(st.length()>0) {
                  if(st.at(0)!='.')
                  s.push(st);
                  else
                  {
                      if(st=="..")
                      {
                          if(s.size())
                          s.pop();
                      }
                      else if(st==".")
                      {
                        
                      }
                      else
                        s.push(st);   
                  }
              }
                st="";
            }
                
        }
        string ans="";
        while(s.size()>0)
        {
            string x=s.top();
            if(x!=".")
           ans="/"+x+ans ;
    
            s.pop();
        }
        if(!ans.length())
            ans="/";
        return ans;
    }
};