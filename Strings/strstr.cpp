class Solution {
public:
    int strStr(string b, string a) {
        int n=b.length();
        int m=a.length();
        if(m==0)
            return 0;
     for(int i=0;i<n-m+1;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(b.at(i+j)!=a.at(j))
                 break;
             if(j==m-1)
                 return i;
         }
     }
        return -1;
    }
};