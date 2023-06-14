#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class node
{
    public:
    int data;
    class node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }

};

void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        head=new node(val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=new node(val);
}

void display(node* &head)
{
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<temp->data<<" ";
    
    
}



int main()
{   
    node* head=new node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    display(head);

    cout<<endl;

    
    

    return 0;
}
