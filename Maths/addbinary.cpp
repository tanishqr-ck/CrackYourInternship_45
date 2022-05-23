class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length();
        int m=b.length();
        if(n<m)
        {
            for(int i=0;i<m-n;i++)
                a="0"+a;
        }
         if(n>m)
        {
            for(int i=0;i<n-m;i++)
                b="0"+b;
        }
        string ans="";
        int x=a.length();
        int c=0;
        for(int i=x-1;i>=0;i--)
        {
        if((a.at(i)=='1'&&b.at(i)=='0'&&c==0)||(a.at(i)=='0'&&b.at(i)=='1'&&c==0)||(a.at(i)=='0'&&b.at(i)=='0'&&c==1))
            {
               ans="1"+ans;
            c=0;
            }
            else if((a.at(i)=='1'&&b.at(i)=='0'&&c==1)||(a.at(i)=='0'&&b.at(i)=='1'&&c==1)||(a.at(i)=='1'&&b.at(i)=='1'&&c==0))
            {
                 ans="0"+ans;
                
            c=1;
            }
            else if((a.at(i)=='0'&&b.at(i)=='0'&&c==0))
            {
                 ans="0"+ans;
            c=0;
            }
            else if((a.at(i)=='1'&&b.at(i)=='1'&&c==1))
            {
                 ans="1"+ans;
            c=1;
            }
        }
        if(c)
          ans="1"+ans;
        return ans;
        
    }
};