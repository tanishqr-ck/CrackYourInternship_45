#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]; int pr=1;
    for(int i=0;i<n;i++){
    cin>>a[i];
    pr*=a[i];
    }
   
    int p[n];
    for(int i=0;i<n;i++)
    {
        p[i]=pr/a[i];
    }
    for(int i=0;i<n;i++)
    cout<<p[i]<<"  ";
    return 0;
}