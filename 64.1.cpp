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

bool common(node* head1,int m,node* head2,int n)
{
    int lim=m-n;
    node* temp1=head1;
    node* temp2=head2;

    while(lim--)
    {
        temp1=temp1->next;

    }
    while(temp1->next!=NULL)
    {
        if(temp1->next==temp2->next)
        {
            return true;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return false;
}

node* merge(node* head1,node* head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data>p2->data)
        {
            p3->next=p2;
            p2=p2->next;
        }
        else
        {
            p3->next=p1;
            p1=p1->next;
        }
        p3=p3->next;
    }
    
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    p3->next=NULL;
    
    return dummy->next;

}



int main()
{   
    node* head1=new node(1);
    insertAtTail(head1,4);
    insertAtTail(head1,7);
    insertAtTail(head1,7);
    insertAtTail(head1,9);
    insertAtTail(head1,10);

    node* head2=new node(1);
    insertAtTail(head2,2);
    insertAtTail(head2,2);
    insertAtTail(head2,4);
    insertAtTail(head2,13);
    insertAtTail(head2,20);
    
   
    
    
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    
    node* newhead=merge(head1,head2);
    display(newhead);
    



    cout<<endl;

    
    

    return 0;
}


