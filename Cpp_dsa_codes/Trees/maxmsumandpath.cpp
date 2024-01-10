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
int sum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=sum(root->left);
    int rh=sum(root->right);
    if(lh>rh)
    {
        return lh+root->data;
    }
    else
    {
        return rh+root->data;
    }
    
}
bool printmaxmsumnodes(node *root,int sum)
{
    if(sum==0)
    {
        return true;
    }
    if(root==NULL)
    {
        return false;
    }
    bool lh=printmaxmsumnodes(root->left,sum-root->data);
    bool rh=printmaxmsumnodes(root->right,sum-root->data);
    if(lh || rh)
    {
        cout<<root->data<<endl;

    }
    return lh || rh;


}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
   int maxm=sum(root);
   cout<<maxm;
   cout<<"***********************************************************"<<endl;
   printmaxmsumnodes(root,maxm);
   return 0;

}
 