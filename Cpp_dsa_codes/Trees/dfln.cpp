#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
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
void findnodes(node* root,unordered_set<int> st,vector<int> path,int distance)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        st.insert(path.at(path.size()-distance));
        return;
        
    }
    path.push_back(root->data);
    findnodes(root->left,st,path,distance);
    findnodes(root->right,st,path,distance);   
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    unordered_set<int>st;

    vector<int> path;
    int distance=1;
    findnodes(root,st,path,distance);
    for(int i:st)
    {
        cout<<i<<" ";
    }
    
    
     return 0;

}
 