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
       ListNode *temp=list1,*temp2=list2;
        multiset<int> a;
        while(temp||temp2)
        {
           if(temp)
           {
               a.insert(temp->val);
               temp=temp->next;
           }
             if(temp2)
           {
               a.insert(temp2->val);
               temp2=temp2->next;
           }
        }
        
        for(auto x:a)
        {
            nxt->next=new ListNode(x);
            nxt=nxt->next;
        }
        
        head=head->next;
        
        return head;
    }
};