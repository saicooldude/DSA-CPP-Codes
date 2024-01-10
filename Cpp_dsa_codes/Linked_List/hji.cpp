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
    cin>>temp->data;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;

    }
    else
    {
        struct node* sas=head;
        while(sas->next!=NULL)
        {
            sas=sas->next;

        }
        sas->next=temp;
    }
    
}
void printnode()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    printnode();
}