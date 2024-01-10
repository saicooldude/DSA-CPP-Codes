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
void printdata(struct node *root1)
{
    if(root1==NULL)
    {
        return;
    }
    
    printdata(root1->left);
    cout<<root1->data;
    printdata(root1->right);


}
void reverselevelorder()
{
    stack<node*>st;
    list<node*> qt;
    qt.push_back(root);
    while(!qt.empty())
    {
        node* p=qt.front();
        st.push(p);
        qt.pop_front();
        if(p->right)
        {
            qt.push_back(p->right);
        }
        if(p->left)
        {
            qt.push_back(p->left);
        }
    }
    while(!st.empty())
    {
        node* k=st.top();
        st.pop();
        cout<<k->data<<" ";
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
    reverselevelorder();
     return 0;

}
 