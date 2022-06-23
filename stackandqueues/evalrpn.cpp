class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> a;
        int x,y;
        for(auto z:tokens)
        {
           if(z=="/"||z=="+"||z=="-"||z=="*")
           {
               x=a.top();
               a.pop();
               y=a.top();
               a.pop();
               if(z=="+")
                   a.push(x+y);
               else if(z=="-")
                   a.push(y-x);
               else if(z=="*")
                   a.push(x*y);
               else
                   a.push(y/x);
                   
           }
            else
                a.push(stoi(z));
        }
        return a.top();
    }
};