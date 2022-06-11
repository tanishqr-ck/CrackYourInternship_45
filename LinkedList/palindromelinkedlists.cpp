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
    bool isPalindrome(ListNode* head) {
        ListNode *mid=middle(head);
        mid=mid->next;
        ListNode *back=reverseList(mid);
        ListNode *front=head;
        while(back&&front)
        {
            if(back->val!=front->val)
                return false;
            back=back->next;
            front=front->next;
        }
        return true;
        
    }
    ListNode* middle(ListNode *a)
    {
        ListNode *s,*f;
        s=a;f=a;
        while(f->next!=NULL&&f->next->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
     ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*nxt=NULL;
        while(head)
        {
            nxt=head->next;
            head->next=prev;
            prev=head;
           head=nxt;  }
        return prev;
    }
};