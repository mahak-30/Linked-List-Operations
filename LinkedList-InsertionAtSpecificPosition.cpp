Node* insertAtNth(Node* head, int item, int position)
{
    Node* ptr=(Node *)malloc(sizeof(Node*));
    if(head==NULL)
    {
        ptr->data=item;
        ptr->next=NULL;
        head=ptr;
    }
    else if(position==0)
    {
        ptr->data=item;
        ptr->next=head;
        head=ptr;
    }
    else
    {
        ptr->data=item;
        ptr->next=NULL;
        Node *a=head;
        int d=1;
        while(a->next!=NULL)
        {
            if(d==position)
            {
                ptr->next=a->next;
                a->next=ptr;
                break;
            }
            a=a->next;
            d++;
        }
    }
    cout<<"Checkpoint"<<endl;
    return head;
}