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
        ListNode *d=new ListNode();
        ListNode *start=d;
        while(head)
        {
            if(head->next==NULL||head->next->val!=head->val)
            {
                d->next=new ListNode(head->val);
                d=d->next;
            }
            else
            {
                while(head->next!=NULL&&head->val==head->next->val)
                    head=head->next;
            }
            head=head->next;
        }
        return start->next;
    }
};