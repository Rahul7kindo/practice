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

void toDelete(node* &head,int val)
{
    node* temp=head;
    if(head==NULL)
    {
        cout<<"THE LINKED LIST IS EMPTY";
    }
    if(head->data==val)
    {
        head=head->next;
        delete(temp);
        return;
    }
    while(temp!=NULL)
    {
        
        if(temp->next->data==val)
        {
            node* trash=temp->next;
            temp->next=temp->next->next;
            delete(trash);
            return;
        }
        temp=temp->next;
    }
    cout<<"COULD NOT FIND THE ELEMENT";
}

node* reverse(node* &temp)
{
    if(temp->next->next==NULL)
    {
        temp->next->next=temp;
        temp->next=NULL;
        return temp->next;
    }
    reverse(temp->next);
    temp->next->next=temp;
    temp->next=NULL;

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
    display(reverse(head));
    cout<<endl;
    
    



    cout<<endl;

    
    

    return 0;
}

