void search(Node* head, int item)
{
	int i=0,flag=0;
	Node* ptr=head;
	if(ptr==NULL)
	{
		cout<<"Empty"<<endl;
	}
	else
	{
		while(ptr!=NULL)
		{
			if(ptr->data==item)
			{
				cout<<"Location: "<<i+1<<endl;
				flag=1;
				break;
			}
			ptr=ptr->next;
			i++;
		}
	}
	if(flag==0)
	{
		cout<<"Not found"<<endl;
	}
}