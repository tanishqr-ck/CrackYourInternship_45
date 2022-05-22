class Solution {
public:
     
    int findPeakElement(vector<int>& a) {
     int l=0,u=a.size()-1;
        while(l<u)
        {
            int mid=l+(u-l)/2;
            if(a[mid]>a[mid+1])
                u=mid;
            else
                l=mid+1;
        }
        return u;
    }
   
};