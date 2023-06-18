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

void delNode(node* &head,int val)
{
    node* temp=head;
    if(head->data==val)
    {
        node* trash=head;
        head=head->next;
        head->prev=NULL;
        delete(trash);
        return;
    }
    while(temp!=NULL)
    {
        if(temp->next->data==val)
        {
            node* trash=temp->next;
            temp->next=trash->next;
            trash->next->prev=temp;
            trash->prev=NULL;
            delete(trash);
            return;
        }
        temp=temp->next;
    }
}

node* appendK(node* &head,int k)
{
    node* temp=head;

    

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* connect=temp;
    int lim=k-1;

    while(lim--)
    {
        temp=temp->prev;
    }
    node* newhead=temp;
    node* latch=temp->prev;
    temp->prev=NULL;
    latch->next=NULL;
    connect->next=head;
    head->prev=connect;
    return newhead;
    



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
    node* res=appendK(head,3);

    display(res);
    cout<<"done"<<endl;

    // delNode(head,4);

    // display(head);
    // cout<<"done"<<endl;

    // delNode(head,1);
    // display(head);
    // cout<<"done"<<endl;

    // node* res=insertAtHead(head,6);
    // display(res);
    // cout<<"done"<<endl;
    
    
    



    cout<<endl;

    
    

    return 0;
}

