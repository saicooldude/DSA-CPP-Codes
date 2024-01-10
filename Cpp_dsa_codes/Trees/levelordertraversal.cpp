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
void levelordertraversal()
{
    struct node* temp;
    list<struct node*> qt;
    qt.push_back(root);
    
    while(!qt.empty())
    {
        temp=qt.front();
        qt.pop_front();
        
        
        cout<<temp->data;
        if(temp->left)
        {
            qt.push_back(temp->left);
        }
        if(temp->right)
        {
            qt.push_back(temp->right);
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
   levelordertraversal();
      return 0;

}
 