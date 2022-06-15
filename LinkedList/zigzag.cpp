class Solution
{
    public:
    Node *zigZag(Node* head)
    {
     int d=1;
     Node *cur=head;
     while(cur->next!=NULL)
     {
         if(d)
         {
             if(cur->data>cur->next->data)
             swap(cur->data,cur->next->data);
             d=0;
         }
         else
         {
             if(cur->data<cur->next->data)
             swap(cur->data,cur->next->data);
             d=1;
         }
         cur=cur->next;
     }
     return head;
    }
};