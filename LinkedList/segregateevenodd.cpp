class Solution{
public:
    Node* divide(int N, Node *head){
Node *d=new Node(0);
Node *d2=new Node(0);
Node *x=d2,*y=d;
while(head)
{
    if(head->data%2)
    d2->next=new Node(head->data),d2=d2->next;
    else
    d->next=new Node(head->data),d=d->next;
    head=head->next;
}
d->next=x->next;
return y->next;


    }
};