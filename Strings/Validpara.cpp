class Solution {
public:
   bool isValid(string s) {
       stack<char> a;
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='(' || s.at(i)=='{' || s.at(i)=='[')
             a.push(s.at(i));
            else
            {
                if(a.size()==0)
                    return false;
                char ch=a.top();
                a.pop();
              
                if(ch == '(' && s.at(i) == ')')
                {}
                else if(ch == '{' && s.at(i) == '}')
                {}
                else if(ch == '[' && s.at(i) == ']')
                {}
                else
                return false;
                    
            }
        }
        
        return a.size()==0;
    }
};