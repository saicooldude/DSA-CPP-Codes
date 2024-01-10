#include<iostream>
using namespace std;
#include<stack>
#include<stdio.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
    int ld;

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
int ancestors(node *p,node *an)
{
    if(p==NULL)
    {
        return 0;
    }
    if(p->data==an->data)
    {
        cout<<p->data;
        return 1;
    }
    if(ancestors(p->left,an)||ancestors(p->right,an))
    {
        cout<<p->data;
        return 1;
    } 

}
node* lowestcommonancestors(node *p,int n,int m)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(p->data==n||p->data==m)
    {
        return p;
    }
    node *lst=lowestcommonancestors(p->left,n,m);
    node *rst=lowestcommonancestors(p->right,n,m);
    if(lst!=NULL &&rst!=NULL)
    {
        return p;
    }
    else
    {
        return (lst?lst:rst);
    }
    
}
void assign(node *p,int hd)
{
    if(p==NULL)
    {
        return;

    }
    p->ld=hd;
    assign(p->left,hd-1);
    assign(p->right,hd+1);
    
}
void preordertraversal(node *p)
{
    if(p==NULL)
    {
        return;
    }
    preordertraversal(p->left);
    cout<<p->ld;
    preordertraversal(p->right);
}

int main()
{
    int n;
    cout<<"enter the no of nodes";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();

    }
    struct node *an=new node;
    an->data=5;
    if(ancestors(root,an))
    {
        cout<<endl<<"ancestors printed";
    }
    else
    {
        cout<<"ancestors not found";
    }
    cout<<"*********************************************************************";
    int m=3;
    int o=15;
    node *u=lowestcommonancestors(root,m,o);
    cout<<"*********************************************************";
    assign(root,0);
    preordertraversal(root);
    
return 0;
}