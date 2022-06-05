/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int a,b,c;
        NodeList *t=head;
        while(t!=NULL)
        {
            if(t->value==0)
            a++;
           else  if(t->value==1)
            b++;
            else
            c++;
            t=t->next;
        }
        t=head;
        while(t!=NULL&&a)
        {
            t->val=0;
            a--;
t=t->next;
        }
         while(t!=NULL&&b)
        {
            t->val=1;
            b--;
t=t->next;
        }
         while(t!=NULL&&c)
        {
            t->val=2;
            c--;
t=t->next;
        }
return head;
    }
};