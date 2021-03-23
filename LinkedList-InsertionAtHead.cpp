Node* insertAtHead(Node* head, int item)
{
    Node* ptr=(Node *)malloc(sizeof(Node*));
    ptr->data=item;
    ptr->next=NULL;
    head=ptr;
    cout<<"Checkpoint"<<endl;
    return head;
}