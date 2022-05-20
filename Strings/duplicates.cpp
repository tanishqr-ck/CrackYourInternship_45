#include<bits/stdc++.h>
using namespace std;



int main()
{
string str;
cin<<str;
map<char,int> a;
for(int i=0;i<str.length();i++)
{
a[str.at(i)]++;
}
return 0;
}
