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
       ListNode *head2=head;
        ListNode *t2=head2;
        ListNode *t=head;
        while(t!=NULL)
        {
            if(t->val!=t2->val){
                t2->next=t;
                t2=t;}
            t=t->next;
        }
        if(t2!=NULL)
        t2->next=NULL;
      return head2;  
    }
};