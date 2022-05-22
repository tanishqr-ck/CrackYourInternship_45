#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int a[n];
int b[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
cin>>b[i];
sort(b,b+n,greater<int>());
for(int i=0;i<n;i++)
{
if(a[i]+b[i]<k)
{
cout<<"FALSE";
return 0;
}

} 
cout<<"TRUE";
return 0;
}