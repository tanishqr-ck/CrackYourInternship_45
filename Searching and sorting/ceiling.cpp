#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int l=0,u=n-1;
if(a[l]>=x){
cout<<a[l];
return 0;
}
if(a[u]<=x){
cout<<a[u];
return 0;
}


while(l<u)
{
int mid=l+(u-l)/2;
if(a[mid]<x)
{
l=mid+1;
}
else
{
u=mid;
}
}

cout<<"Ceil: "<<a[u];

}