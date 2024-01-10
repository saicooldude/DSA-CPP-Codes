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
node* ancestor(node* p,int k,int q)
{
    if(p==NULL)
    {
        return NULL;
    }
    if(p->data==k || p->data==q)
    {
        return p;
    }
    node* s1=ancestor(p->left,k,q);
    node* s2=ancestor(p->right,k,q);
    if(s1 && s2)
    {
        return p;
    }
    else if(s1!=NULL&& s2==NULL)
    {
        return s1;
    }
    else if(s2!=NULL && s1==NULL)
    {
        return s2;
    }
    else
    {
        return NULL;
    }
    
    
    
    
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
node* p=ancestor(root,1,6);
cout<<p->data;

}