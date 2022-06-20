#include<bits/stdc++.h>
#define ln endl
using namespace std;
stack<int> a;
int perform(int c,int b,char ch)
{
if(ch=='+')
return c+b;
if(ch=='-')
return c-b;
if(ch=='%')
return c%b;
if(ch=='/')
return c/b;
if(ch=='*')
return c*b;
}
int main()
{

string st;
cin>>st;
for(int i=0;i<st.length();i++)
{
char ch=st.at(i);
if(ch>=48&&ch<=57)
a.push();
else
{
int c=a.top();
a.pop();
int b=a.top();
a.pop();
int d=perform(c,b,ch);
a.push(d);
}
}
cout<<a.top();
}