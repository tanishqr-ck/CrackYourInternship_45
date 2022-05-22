#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    sort(a,a+n);
    int median;
    if(n&1==1)
    median=a[n/2];
    else
    median=(a[n/2]+a[n/2-1])/2;
    int cost=0;
    for(int i=0;i<n;i++)
{
    cost+=abs(a[i]-median);
}
cout<<cost;
}