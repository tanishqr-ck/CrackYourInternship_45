#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int b = -1, b2 = -1, f = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            if (f)
            {
                b = i - 1;
                f = 0;
            }
            b2 = i;
        }
    }
    if(b==-1&&b2==-1)
    {
        cout<<"TRUE";
        return 0;
    }
    if (b != 0 && a[b - 1] > a[b2] && b2 != n - 1 && a[b2 + 1] < a[b] )
    {
        cout << "FALSE";
        return 0;
    }
   if(b==0&&b2!=n-1&&a[b2 + 1] < a[b])
   {
        cout << "FALSE";
        return 0;
    }
    if(b!=0&&b2==n-1&&a[b - 1] > a[b2])
   {
        cout << "FALSE";
        return 0;
    }
    cout << "TRUE";
    return 0;
}
