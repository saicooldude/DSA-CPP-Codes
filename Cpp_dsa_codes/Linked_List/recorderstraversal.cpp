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
int  print(node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    cout<<p->data;
    int lh=print(p->left);
    
    int rh=print(p->right);
    
    return 1;

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
    print(root);
    return 0;
}
