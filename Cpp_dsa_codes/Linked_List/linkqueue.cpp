#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *front=NULL;
struct node *rear=NULL;
void addnode()
{
    struct node *temp=new node;
    cout<<"ENTER THE ELEMENT"<<endl;
    cin>>temp->data;
    temp->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;

    }
    else
    {
        rear->next=temp;
        rear=temp;
    }

}
void deletenode()
{
    struct node *temp=front;
    if(front==NULL)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
        front=front->next;
        cout<<"elementdeleted successfully"<<endl;
        free(temp);

    }

}
void peek()
{
    if(front==NULL && rear==NULL)
    {
        cout<<"under flow"<<endl;
    }
    else
    {
        cout<<"peak element is"<<front->data<<endl;

    }

}
void traverse()
{
    struct node *temp;
    if(front==NULL && rear==NULL)
    {
        cout<<"linked list is empty"<<endl;
    }
    else
    {
        struct node *ite=front;
        while(ite!=NULL)
        {
            cout<<ite->data<<endl;
            ite=ite->next;
        }
    }

}
int main()
{
    int i;
    /*for(i=0;i<10;i++)
    {
        addnode();
    }*/
    peek();
    deletenode();
    peek();
    traverse();
    return 0;
}