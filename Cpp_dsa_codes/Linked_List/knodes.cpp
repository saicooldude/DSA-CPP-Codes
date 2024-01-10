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
void knode(int k)
{
    struct node* curr=head;
    struct node* currnext;
    struct node* last;
    if(k==0)
    {
        return;
    }
    int count=1;
    while(count<k && curr!=NULL )
    {
        curr=curr->next;
        count++;

    }
    currnext=curr->next;
    last=head;
    while(last->next!=NULL)
    {
        last=last->next;
    }


last->next=head;
head=currnext;
curr->next=NULL;


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
    int k;
    cin>>k;
    knode(k);
    printnode();

}
