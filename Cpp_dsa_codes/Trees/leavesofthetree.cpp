#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<list>
#include<stack>
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
list<int> qt;
void printleaves(node* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
       qt.push_back(root->data);

    }
    printleaves(root->left);
    printleaves(root->right);
}
stack<int> st;
int printleafnode(node* root,int value)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->data==value)
    {
        st.push(root->data);
        return 1;

    }
    int lh=printleafnode(root->left,value);
    int rh=printleafnode(root->right,value);
    if(lh==1 || rh==1)
    {
       st.push(root->data);
        return 1; 
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
    printleaves(root);
    list< int > :: iterator it=qt.begin();
    for(it=qt.begin();it!=qt.end();it++)
    {
        printleafnode(root,*it);
        
        while(!st.empty())
        {
            int t=st.top();
            cout<<t;
            st.pop();

        }
        cout<<endl;
    }

   
   return 0;

}
 