#include<iostream>
using namespace std;
#include<stack>
#include<stdio.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;

};
struct node *root=NULL;


void addnode()
{
    struct node *temp=new node;
    cout<<"enter the data part";
    cin>>temp->data;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
       struct node *current=root;
       struct node *parent=root;
       while(current)
       {
           parent=current;
           if(temp->data>current->data)
           {
               current=current->right;
           }
           else
           {
               current=current->left;
           }
           
       }
       if(temp->data > parent->data)
       {
           parent->right=temp;

       }
       else
       {
           parent->left=temp;
       }
    }
    

}
struct node *root1=NULL;
void addnode1()
{
    struct node *temp=new node;
    cout<<"enter the data part";
    cin>>temp->data;
    temp->left=NULL;
    temp->right=NULL;
    if(root1==NULL)
    {
        root1=temp;
    }
    else
    {
       struct node *current=root1;
       struct node *parent=root1;
       while(current)
       {
           parent=current;
           if(temp->data>current->data)
           {
               current=current->right;
           }
           else
           {
               current=current->left;
           }
           
       }
       if(temp->data > parent->data)
       {
           parent->right=temp;

       }
       else
       {
           parent->left=temp;
       }
    }
    

}
int  identical(node* m,node* n)
{
    if(m==NULL && n==NULL)
    {
        return 1;
    }
    if(m==NULL || n==NULL)
    {
        return 0;
    }
    if(m->data!=n->data)
    {
        return 0;
    }
    if(identical(m->left,n->left) && identical(m->right,n->right))
    {
        return 1;

    }
}

int subtree(node *m,node* s)
{
    if(s==NULL)
    {
        return 1;
    }
    if(m==NULL)
    {
        return 0;
    }
    if(identical(m,s))
    {
        return 1;
    }
    if(subtree(m->left,s) || subtree(m->right,s))
    {
        return 1;
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
    cout<<"*********************************************";
    for(int i=0;i<1;i++)
    {
        addnode1();
    }
    cout<<subtree(root,root1);
    return 0;
}