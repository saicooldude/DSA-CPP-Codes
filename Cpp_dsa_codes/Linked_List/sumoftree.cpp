#include<iostream>
using namespace std;
#include<stack>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
void addnode()
{
    struct node *temp=new node;
    cout<<"enter the data part";
    cin>>temp->data;
    temp->left=NULL;
    temp->right=NULL;
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
            if(temp->data > curr->data)
            {
                curr=curr->right;
            }
            else
            {
                curr=curr->left;
            }
        }
        if(temp->data>parent->data)
        {
            parent->right=temp;
        }
        else
        {
            parent->left=temp;
        }
    }

}
int sum=0;
int k=10;
int sumoftreepath(node *p)
{
    if (p==0)
    {
        return 0;
    }
    
    
    
    int ls=sumoftreepath(p->left);
    int rs=sumoftreepath(p->right);
    int h;
    if(ls>rs)
    {
        h=ls+1;
    }
    else
    {
        h=rs+1;
    }
    return h;
    
}
int heightr(node *p)                        
{
    if(p==0)
    {
        return 0;
    }
    int ls=heightr(p->left);
    int rs=heightr(p->right);
    int h;
   if(ls > rs)
   {
       h=1+ls;
   }
   else
   {
       h=1+rs;
   }
   return h;
}
int main() 
{
    int n;
    cout<<"enter no of nodes";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    int jk=sumoftreepath(root->left);
    int kk=sumoftreepath(root->right);
    cout<<"height of the tree is"<<sumoftreepath(root);
    cout<<"####################################################################3"<<endl;
    
    cout<<"height of the tree is"<<heightr(root);
    return 0;

    }