#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class node
{
    public:
    int data;
    class node* next;
    class node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }

};

void insertAtTail(node* &head,int val)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(val);
    temp->next->prev=temp;

}

node* insertAtHead(node* &head,int val)
{
    node* newhead=new node(val);
    newhead->next=head;
    head->prev=newhead;
    return newhead;
}

void display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}


int main()
{   
    node* head=new node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    display(head);
    cout<<"done"<<endl;

    node* res=insertAtHead(head,6);
    display(res);
    cout<<"done"<<endl;
    
    
    



    cout<<endl;

    
    

    return 0;
}

