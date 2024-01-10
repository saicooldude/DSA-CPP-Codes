#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct node *root=NULL;

void addnode()
{
    int n;
    cin>>n;
    struct node *temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *parent=root;
        struct node *child=parent;
        while(child)
        {
            parent=child;
            if(temp->data>parent->data)
            {
                child=child->right;
            }
            if(temp->data <parent->data)
            {
                child=child->left;
            }

        }
        if(temp->data < parent->data)
        {
            parent->left=temp;
        }
        else
        {
              parent->right=temp;
        }

        
    }
}
void mirror(node *p)
{
    if(p==NULL)
    {
        return;
    }
    mirror(p->left);
    mirror(p->right);
    node *q=p->left;
    p->left=p->right;
    p->right=q;
}
void preorder(node *p)
{
    if(p==NULL)
    {
        return;
    }
    cout<<p->data<<"  ";
    preorder(p->left);
    preorder(p->right);

}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    preorder(root);
    cout<<endl;
    mirror(root);
    preorder(root);
   
   return 0;

}
 