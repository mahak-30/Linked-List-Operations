void print(Node* head)
{
	Node *a=head;
    while(a->next!=NULL)
    {
        cout<<a->data<<endl;
        a=a->next;
    }
    cout<<a->data<<endl;
    cout<<"Checkpoint"<<endl;
}