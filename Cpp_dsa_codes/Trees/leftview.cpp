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
void levels()
{
    list<node*>qt;
    qt.push_back(root);
    int level=0;

    while(!qt.empty())
    {
        int n=qt.size();
        level++;
        cout<<level<<"()()"<<endl;
        while(n--)
        {
            node* p=qt.front();
            qt.pop_front();

            cout<<p->data<<endl;
            if(p->left)
            {
                qt.push_back(p->left);
            }
            if(p->right)
            {
                qt.push_back(p->right);
            }

        }
    }
    
}
void leftview()
{
    list<node*>qt;
    int i;
    qt.push_back(root);
    while(!qt.empty())
    {
        int n=qt.size();
        i=0;
        while(i<n)
        {
            node* p=qt.front();
            qt.pop_front();


           if(i==0)
           {
               cout<<p->data<<endl;
               
           }
           if(p->left)
           {
               qt.push_back(p->left);
           }
            if(p->right)
            {
                qt.push_back(p->right);
            }
            i++;

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
    ///levels();
    leftview();
    return 0;

}
 