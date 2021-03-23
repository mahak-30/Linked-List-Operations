Node* deleteAtNth(Node* head, int position)
{
    Node *current=head;
    Node *previous=NULL;
    int i;
    for(i=0;i<position;i++)
    {
        previous=current;
        current=current->next;
    }
    if(position==0)
    {
        head=head->next;
    }
    else
    {
        previous->next=current->next;
    }
    free(current);
    cout<<"Checkpoint"<<endl;
    return head;
}