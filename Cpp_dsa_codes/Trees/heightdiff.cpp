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
int heightdiff(node* point)
{
    if(point==NULL)
    {
        return 0;
    }
    int lh=heightdiff(point->left);
    int rh=heightdiff(point->right);
    if(lh>rh)
    {
        return lh+1;
    }
    else
    {
        return rh+1;
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
   int lh=heightdiff(root->left);
   int rh=heightdiff(root->right);
   if(lh-rh == 1 || 0 || -1)
   {
      cout<<"HEIGHT BALANCED";

   }
   else
   {
       cout<<"HEIGHT NOT BALANCED";
   }
   
   return 0;

}
 