
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
struct node *root1=NULL;
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

void addnode1()
{
    int n;
    cin>>n;
    struct node *temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    if(root1==NULL)
    {
        root1=temp;
    }
    else
    {
        struct node *parent=root1;
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

bool identical(struct node *root,struct node *root1)
{
    if(root==NULL && root1==NULL)
    {
        return 1;
    }
    else if (root != NULL && root1 == NULL) 
        return 0; 
    else if (root == NULL && root1 != NULL) 
        return 0; 
    if(root->data ==root1->data && identical(root->left,root1->left) && identical(root->right,root1->right))
    {
        return 1;

    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    for(int i=0;i<m;i++)
    {
        addnode1();
    }
 if(identical(root,root1))
 {
     cout<<"identical";
 }  
 else
 {
     cout<<"not identical";
 }
 
   return 0;

}
 