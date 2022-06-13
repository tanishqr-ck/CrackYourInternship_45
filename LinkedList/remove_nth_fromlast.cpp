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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode *s=NULL,*f=NULL,*cur=head;
        while(n--)
        {
            f=cur;
            cur=cur->next;
        }
        
        cur=head;
        if(!f->next)
            return head->next;
        while(f->next)
        {
            s=cur;
            cur=cur->next;
            f=f->next;
        }
        if(s->next!=NULL&&s->next->next!=NULL)
        s->next=s->next->next;
        else
            s->next=s->next=NULL;
        
        return head;
    }

};