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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      ListNode *d=NULL,*d2=NULL,*temp=head,*start=NULL;
        int index=1;
        while(index<=right)
        {
            if(index==left-1)
                d=temp;
            if(index==left)
                start=temp;
            if(index==right){
                d2=temp->next;
                if(temp->next!=NULL)
            temp->next=NULL;
            }
            index++;
            temp=temp->next;
        }
        ListNode *t=NULL;
       while(start)
       {
          t=start->next;
           start->next=d2;
           d2=start;
           start=t;
       }
        if(d!=NULL)
        d->next=d2;
        else
            head=d2;
        return head;
    }
};