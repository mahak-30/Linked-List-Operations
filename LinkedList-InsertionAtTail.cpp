ode* insertAtTail(Node* head, int item)
{
    Node* ptr=(Node *)malloc(sizeof(Node*));
    ptr->data=item;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        Node *a=head;
        while(a->next!=NULL)
        {
            a=a->next;
        }
        a->next=ptr;
    }
    cout<<"Checkpoint"<<endl;
    return head;
}