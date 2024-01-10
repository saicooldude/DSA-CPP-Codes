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
int nextnodeinsamelevel(int p)
{
    list<node*>lt;
    lt.push_back(root);
    int level=1;
    if(root->data==p)
    {
        return 0;

    }
    list<node*>::iterator it;
    while(!lt.empty())
    {
        int size=lt.size();
        for(it=lt.begin();it!=lt.end();it++)
        {
            node* k=*it;
            if(k->data==p)
            { 
                cout<<"LEVEL IS "<<level<<"NO OF NODES IN THAT LEVEL IS"<<size<<endl;
                it++;
                k=*it;
                if(it!=lt.end())
                {
                return k->data;
                }
                else
                {
                    return 0;
                }
                
            }
        }
        while(size--)
        {
            node* p=lt.front();
            lt.pop_front();
            if(p->left)
            {
                lt.push_back(p->left);
            }
            if(p->right)
            {
                lt.push_back(p->right);
            }
        }
        level=level+1;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();list<node*>lt;
        
    }
    cout<<"ENTER THE NODE";
    int p;
    cin>>p;

    int h=nextnodeinsamelevel(p);
    if(h==0)
    {
        cout<<"NODE IS NULL";
    }
    else
    {
        cout<<"NEXT NODE IS"<<h<<endl;
    }
    
    return 0;

}
 