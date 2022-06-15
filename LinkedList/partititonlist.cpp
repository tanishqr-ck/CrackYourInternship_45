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
    ListNode* partition(ListNode* head, int x) {
       ListNode *list1=new ListNode();
         ListNode *list2=new ListNode();
        ListNode *d=list1,*d2=list2;
        while(head)
        {
            if(head->val<x){
                d->next=new ListNode(head->val);
                d=d->next;
            }
            else
            {
               d2->next=new ListNode(head->val);
                d2=d2->next;  
            }
            head=head->next;
        }
        d->next=list2->next;
        return list1->next;
        
    }
};