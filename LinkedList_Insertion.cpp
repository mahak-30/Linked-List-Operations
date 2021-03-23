#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

Node* insertAtHead(Node* head, int item)
{
    Node* ptr=(Node *)malloc(sizeof(Node*));
    ptr->data=item;
    ptr->next=NULL;
    head=ptr;
    cout<<"Checkpoint 2"<<endl;
    return head;
}

Node* insertAtTail(Node* head, int item)
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
        cout<<"Checkpoint 5"<<endl;
    }
    return head;
}

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
    cout<<"Checkpoint 6"<<endl;
    return head;
}

int main()
{
    int item, position, choice;
    head=NULL;
    cout<<head<<endl;
    cout<<"Checkpoint 1"<<endl;
    head=insertAtHead(head, 1);
    head=insertAtTail(head, 2);
    head=insertAtTail(head, 3);
    head=insertAtTail(head, 4);
    head=insertAtNth(head, 5, 0);
    head=insertAtNth(head, 6, 2);
    cout<<"Checkpoint 3"<<endl;
    Node *a=head;
    while(a->next!=NULL)
    {
        cout<<a->data<<endl;
        a=a->next;
    }
    cout<<a->data<<endl;
    cout<<"Checkpoint 4"<<endl;
    return 0;
}