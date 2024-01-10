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
    cout<<"ENTER ELEMENT";
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
void middle()
{
    int count=0,n,i;
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    if(count%2==0)
    { 
        n=(count/2)+1;

    }
    else{
        n=(count/2)+1;
    }
struct node* poin=head;
    for(i=0;i<n-1;i++)
    {
        poin=poin->next;
    }
    cout<<poin->data;
}





int main()
{
    int size,i;
    cout<<" ENTER THE NO OF ELEMENTS ";
    cin>>size;
 for(i=0;i<size;i++)
 {
     addnode();
 }
 middle();
 return 0;
}
