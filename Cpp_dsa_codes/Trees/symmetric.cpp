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

int issymmetric(node* p,node* q)
{
    if(p==NULL && q==NULL)
    {
        return 1;
    }
    
    if(p!=NULL && q!=NULL)
    {
        
        return issymmetric(p->left,q->left) && issymmetric(p->right,q->right);
        

    }
    return 0;

}



int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
   if(issymmetric(root->left,root->right))
   {
       cout<<"Symmetric";
   }
   else
   {
       cout<<"Not symmetric";
   }
   
   return 0;

}
 