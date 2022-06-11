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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=reverseList(l1);
        ListNode* l4=reverseList(l2);
       int carry=0,sum=0;
        ListNode *list=new ListNode(0);
        ListNode *head=list;
        while(l3||l4)
        {
            int a=0,b=0;
            if(l3)
            {
                a=l3->val;
                l3=l3->next;
            }
            if(l4)
            {
                b=l4->val;
                l4=l4->next;
            }
            sum=a+b+carry;
            carry=sum/10;
            list->next=new ListNode(sum%10);
            list=list->next;
            
        }
        if(carry)
            list->next=new ListNode(1);
        head=head->next;
        ListNode *head2=reverseList(head);
        return head2;
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