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
void printnode()
{
    struct node* ror=head;
    
    while(ror!=NULL)
    {
        cout<<ror->data;
        ror=ror->next;
    }
}
void deletenodes()
{
    struct node* prev=NULL;
    struct node* curr=head;
    struct node* nex=curr->next;
    while(nex)
    {
        if(nex->data > curr->data)
        {
            if(curr==head)
            {
                head=curr->next;
                curr=head;
                prev=NULL;
                nex=curr->next;
                
            }
            else
            {
                prev->next=nex;
                curr=head;
                prev=NULL;
                nex=curr->next;

            }
        }
        
        prev=curr;
        curr=nex;
        nex=nex->next;

    }
    curr=head;
    nex=curr->next;
    if(curr->data < nex->data)
    {
        head=head->next;
    }

}

int main()
{
    int size,i;
    cin>>size;
    for(i=0;i<size;i++)
    {
        addnode();
    }
    deletenodes();
    printnode();
    

}