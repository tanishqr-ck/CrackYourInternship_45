#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
int i=0,j=n-1;
while(i<j)
{
if(a[j]-a[i]>x)
i++;
else if(a[j]-a[i]<x)
j--;
else
{
cout<<a[i]<<","<<a[j];
return 0;
}
}
cout<<"NO PAIR";
return 0;
}