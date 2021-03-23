Node* sort(Node *head)
{
	Node *current=head;
	Node *index=NULL;
	if (head==NULL)
	{
		return head;
	}
	else
	{
		while(current!=NULL)
		{
			index=current->next;
			while(index!=NULL)
			{
				if(current->data>index->data)
				{
					int temp;
					temp=current->data;
					current->data=index->data;
					index->data=temp;
				}
				index=index->data;
			}
			current=current->data;
		}
		cout<<"Checkpoint"<<endl;
	}
	return head;
}