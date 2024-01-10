#include<iostream>
using namespace std;
#include<stack>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root=NULL;
struct node *root1=NULL;
void addnode()
{
    struct node *temp=new node;
    temp->left=NULL;
    temp->right=NULL;
    cout<<"enter node data part";
    cin>>temp->data;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *parent=root;
        struct node *curr=root;
        while(curr)
        {
            parent=curr;
            if(temp->data >curr->data)
            {
                curr=curr->right;
            }
            else
            {
                curr=curr->left;

            }
        }
        if(temp->data >parent->data)
        {
            parent->right=temp;
        }
        else
        {
            parent->left=temp;
        }

        
    }
}
void addnode1()
{
    struct node *temp=new node;
    temp->left=NULL;
    temp->right=NULL;
    cout<<"enter node data part";
    cin>>temp->data;
    if(root1==NULL)
    {
        root1=temp;
    }
    else
    {
        struct node *parent=root1;
        struct node *curr=root1;
        while(curr)
        {
            parent=curr;
            if(temp->data >curr->data)
            {
                curr=curr->right;
            }
            else
            {
                curr=curr->left;

            }
        }
        if(temp->data >parent->data)
        {
            parent->right=temp;
        }
        else
        {
            parent->left=temp;
        }

        
    }
}
bool isomorphic(node *p1,node *p2)
{
    if(p1==NULL && p2==NULL)
    {
        return true;
    }
    if(p1==NULL || p2==NULL)
    {
        return false;
    }
    if(p1->data!=p2->data)
    {
        return false;
    }
    isomorphic(p1->left,p2->left);
    isomorphic(p2->right,p2->right);
    return true;
}

int main()
{
    int n=6;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    cout<<"*************************************";
    for(int i=0;i<n;i++)
    {
        addnode1();
    }
  if(isomorphic(root,root1))
  {
      cout<<"the given tress are ismorphic";
  }
  else
  {
      cout<<"the given trees are not isomorphic";
  }
  return 0;

}




