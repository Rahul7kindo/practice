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
    cout<<"done";
    
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
        node* res=temp->next;
        temp->next->next=temp;
        temp->next=NULL;
        return res;
    }
    node* res=reverse(temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    return res;

}

node* Reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* next;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    
    return prev;
}

node* reverseK(node* &head,int k)
{

    node* temp=head;
    node* prev=NULL;
    node* curr=head;
    node* next;
    int lim=k;

    while(lim--)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    if(curr!=NULL)
    {
        temp->next=reverseK(curr,k);
    }
    
    return prev;

}

bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }

    }
    return false;
}

int main()
{   
    node* head=new node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    // node* temp=head;
    // node* target=head;
    // int k=2;
    // while(k--)
    // {
    //     target=target->next;
    // }
    // while(temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }
    // temp->next=target;

    // display(head);
    // cout<<endl;
    // node* res=reverseK(head,2);
    // display(res);
    // cout<<endl;
    cout<<detectCycle(head);
    cout<<endl;
    
    



    cout<<endl;

    
    

    return 0;
}

