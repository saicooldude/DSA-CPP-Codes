#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
void addnode()
{
    struct node* temp=new node;
    temp->next=NULL;
    cout<<"enter elment";
    cin>>temp->data;
    if(head==NULL)
    {
        head=temp;

    }
    else
    {
        struct node* iterator=head;
        while(iterator->next!=NULL)
        {
           iterator=iterator->next;
        }
        iterator->next=temp;
    }
}
struct node* snode;
void pali()
{
    struct node* p=head;
    struct node* q=head;
    
    while(1)
    {
        p=p->next->next;
       if(p->next!=NULL)
       {
           snode=q->next->next;
            break;
       }
       if(p==NULL)
       {
           snode=q->next;
           break;
       }
            q=q->next;

    }
    q->next=NULL;
}


void reverse()
{
    struct node* prev=NULL;
    struct node* curr=snode;
    struct node* next=snode;
    while(next!=NULL)

    {
        next=next->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
  snode=prev;

}



void printnode()
{
    struct node* fs1=head;
    struct node* fs2=snode;
    int count=0;
    while(fs1!=NULL &&fs2!=NULL)
    {
        if(fs1->data!=fs2->data)
        {
            count=1;
        }
        fs1=fs1->next;
        fs2=fs2->next;
    }
    if(count==0)
    {
        cout<<"PALINDROME";
    }
    else
    {
        cout<<"NOT PALINDROME";
    }

    }
    int main()
    {
        int size,i;
        cin>>size;
        for(i=0;i<=size;i++)
        {
            addnode();

        }
        pali();
    reverse();
    printnode();

}
