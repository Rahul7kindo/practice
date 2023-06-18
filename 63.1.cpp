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





int main()
{   
    node* head1=new node(1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);

    node* temp1=head1;
    int k=3;

    while(k--)
    {
        temp1=temp1->next;
    }

    node* head2=new node(-1);
    insertAtTail(head2,-2);
    insertAtTail(head2,-3);

    node* temp2=head2;

    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }

    temp2->next=temp1;
    

    cout<<common(head1,6,head2,6);
   
    cout<<endl;
    
    display(head1);
    display(head2);
    



    cout<<endl;

    
    

    return 0;
}


