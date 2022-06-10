#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define mod 1000000007
#define mp make_pair
#define pb(x) push_back(x)
#define popb pop_back()
#define ln "\n"
#define ar array
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
const int mxn=2e5;
long multiply(ListNode *a,ListNode *b)
{
    long c=0,d=0;
    while (a!=NULL||b!=NULL)
    {
        if(a!=NULL)
        c=c*10+a->val,a=a->next;
        if(b!=NULL)
        d=d*10+b->val,b=b->next;
}
    return (a*b)%mod;
}
