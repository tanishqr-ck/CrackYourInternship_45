class Solution {
public:
    int maxProfit(vector<int>& a) {
 int i=a[0],j=0,profit=0;
        for(int k=1;k<a.size();k++)
        {
           if(a[k]>i){
                j=a[k];
                profit+=j-i;
               
            }
             i=a[k];
        }
      return profit; }
        
    
};