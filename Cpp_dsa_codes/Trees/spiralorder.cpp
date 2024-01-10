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
void spiralordertraversal()
{
    stack<node*>st1;
    stack<node*>st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty())
    {
        while(!st1.empty())
        {
            node* p=st1.top();
            cout<<p->data<<" ";
            st1.pop();
            if(p->left!=NULL)
            {
                st2.push(p->left);

            }
            if(p->right!=NULL)
            {
                st2.push(p->right);
            }

        }
        while(!st2.empty())
        {
            node* p1=st2.top();
            cout<<p1->data<<" ";
            st2.pop();
            if(p1->right)
            {
                st1.push(p1->right);
            }
            if(p1->left)
            {
                st1.push(p1->left);
            }
        }
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
    spiralordertraversal();
   
   return 0;

}
 