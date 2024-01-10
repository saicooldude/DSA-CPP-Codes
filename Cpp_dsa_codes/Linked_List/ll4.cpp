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
void reverse()
{
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* next=head;
    while(next!=NULL)
    {
        next=next->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;

}


void printnode()
{
    struct node* ror=head;
    while(ror!=NULL)
    {
        cout<<ror->data;
        ror=ror->next;
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
    reverse();
    printnode();

}
