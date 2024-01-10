#include<iostream>
using namespace std;
struct node
{
    struct node*left;
    int data;
    struct node *right;

};
struct node *root=NULL;
void addnode()
{
    struct node *temp=new node;
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
            if(curr->data > temp->data)
            {
                curr=curr->left;
            }
            else
            {
                curr=curr->left;
            }
            
        }
        if(parent->data > temp->data)
        {
            parent->left=temp;
        }
        else
        {
            parent->right=temp;
        }
    }
    
}
void inordertraversal(node * root)
{
    if(root==NULL)
    {
        return;
    }
    inordertraversal(root->left);
    cout<<root->data;
    inordertraversal(root->right);

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
   inordertraversal(root);
    return 0;
}