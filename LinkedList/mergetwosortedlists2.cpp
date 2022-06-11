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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *nxt=new ListNode(0);
        ListNode *head=nxt;
       ListNode *i=list1,*j=list2;
       while(i&&j)
       {
           if(i->val<j->val)
           {
               nxt->next=new ListNode(i->val);
               
               i=i->next;
           }
           else
           {
                nxt->next=new ListNode(j->val);
              
               j=j->next;
           }
           nxt=nxt->next;
       }
        while(i)
        {
          nxt->next=new ListNode(i->val);
                nxt=nxt->next;
               i=i->next;  
        }
        while(j)
        {
          nxt->next=new ListNode(j->val);
                nxt=nxt->next;
               j=j->next;  
        }
        
        head=head->next;
        
        return head;
    }
};