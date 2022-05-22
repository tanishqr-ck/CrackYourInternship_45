#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]; int pr=1;
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    int p[n];
    p[0]=1;
    p[n-1]=1;
    int t=1;
    for(int i=0;i<n;i++)
    {
     p[i]=t;
     t=t*a[i];
    }
    t=1;
    for(int i=n-1;i>=0;i--)
    {
     p[i]*=t;
     t=t*a[i];
    }
     for(int i=0;i<n;i++)
    cout<<p[i]<<"  ";
}