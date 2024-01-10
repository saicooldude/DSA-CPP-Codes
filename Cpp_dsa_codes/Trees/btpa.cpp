#include<iostream>
using namespace std;
struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct node* root=NULL;
node* inorder(node* roo,int parent)
{
    if(roo==NULL)
    {
        return NULL;
    }
    if(roo->data==parent)
    {
        return roo;
    }
    node* p=inorder(roo->left,parent);
    node* q=inorder(roo->right,parent);
    if(p!=NULL && q==NULL)
    {
        return p;
        
    }
    else if(p==NULL && q!=NULL)
    {
        return q;
    }
    else
    {
        return NULL;
    }

}
void addnode(int parent,int child)
{
    struct node* temp=new node;
    temp->data=child;
    temp->left=NULL;
    temp->right=NULL;
    if(parent==-1)
    {
        root=temp;
    }
    else
    {
        node* p=inorder(root,parent);
        if(p->left==NULL)
        {
            p->left=temp;
        }
        else
        {
            p->right=temp;
        }
    }

}
void print(node* root)
{
if(root==NULL)
{
    return;

}
print(root->left);
cout<<root->data;
print(root->right);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
     addnode(arr[i],i);   
    }
    print(root);

}