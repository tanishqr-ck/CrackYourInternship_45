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
    void reorderList(ListNode* head) {
        // if(head==NULL||head->next==NULL||head->next->next==NULL)
        //     return;
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {slow=slow->next;fast=fast->next->next;}
        ListNode *pt=slow;
        slow=slow->next;
         ListNode *last=NULL;
        while(slow)
        {
            ListNode *temp=slow->next;
            slow->next=last;
            last=slow;
            slow=temp;
            }
        pt->next=NULL;
        ListNode *t=NULL,*t2=NULL,*d=head;
        while(last)
        {
            t=d->next;
            if(d)
            d->next=last;
            t2=last->next;
            if(last)
            last->next=t;
           
            d=t;
            last=t2;
        }
            
            
        
    }
};