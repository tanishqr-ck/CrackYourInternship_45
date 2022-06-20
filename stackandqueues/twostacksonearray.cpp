#include<bits/stdc++.h>
#define ln endl
#define n 20
using namespace std;
int a[n];
int i=0,j=n-1;
void push1(int x)
{
if(i+1<j)
a[i++]=x;
else
cout<<"Overflow"<<ln;
}
void push2(int x)
{
if(i<j-1)
a[j--]=x;
else
cout<<"Overflow"<<ln;
}
int pop1()
{
int temp=a[i];
i--;
return temp;
}
int pop2()
{
int temp=a[j];
j++;
return temp;
}
int main()
{
}