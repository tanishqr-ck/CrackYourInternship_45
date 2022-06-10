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
void del(ListNode *a)
{
    if(a==NULL&&a->next==NULL)
    return ;
    while(a->next!=NULL)
    {
       a->val=a->next->val;
       a=a->next;
    }
    a->next=NULL;
 
}
