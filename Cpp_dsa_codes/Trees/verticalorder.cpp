#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<map>
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
map<int,vector<int> > mp;
void verticalordertraversal(node* root,int hd)
{
    
    if(root==NULL)
    {
        return;
    }
    mp[hd].push_back(root->data);
    verticalordertraversal(root->left,hd-1);
    verticalordertraversal(root->right,hd+1);  
}
void printnode()
{
    
    map<int,vector<int> > ::iterator mt;
    for(mt=mp.begin();mt!=mp.end();mt++)
    {
        for(int i=0;i<mt->second.size();++i)
        {
            cout<<mt->second[i]<<" ";
        }
        cout<<endl;
    }
}
void topview()
{
    map<int,vector<int> > ::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        for(int i=0;i<it->second.size();i++)
        {
            if(i==0)
            {
                cout<<it->second[0]<<endl;
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
    int hd=0;
   verticalordertraversal(root,hd);
   cout<<"********vertical order traversal is *********************"<<endl;
   printnode();
   cout<<"***********topview************";
   topview();
   return 0;

}
 