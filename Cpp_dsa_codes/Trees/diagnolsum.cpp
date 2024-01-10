#include<iostream>
#include<bits/stdc++.h>
#include<map>
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
map<int,vector<int> > map1;
void diagnolelements(node* root,int hd)
{
    if(root==NULL)
    {
        return;
    }
    map1[hd].push_back(root->data);
    diagnolelements(root->left,hd+1);
    diagnolelements(root->right,hd);
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
   int hd=0;
   diagnolelements(root,hd);
   map<int,vector<int> >::iterator it;
   cout<<"*********************************************";
   for(it=map1.begin();it!=map1.end();it++)
   {
       for(int i=0;i<it->second.size();i++)
       {
           cout<<it->second[i]<<" ";
       }
       cout<<endl;
   }

   return 0;

}
 