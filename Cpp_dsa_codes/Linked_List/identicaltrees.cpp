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
struct node *root1=NULL;
void insertnode()
{
    struct node *temp=new node;
    cout<<"enter the data part";
    cin>>temp->data;
    temp->left=NULL;
    temp->right=NULL;
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
int identical(node *p,node *q)
{ 
    if(p==NULL && q==NULL)
    {
        return 1;
    }
    if(p!=NULL && q!=NULL)
    {
        if(p->data==q->data && (identical(p->left,q->left)) && (identical(p->right,q->right)))
         {
             return 1;
         }
         else
         {
             return 0;
         }
    }
    return 0;


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
    cout<<"**********************************************************"<<endl;
    int n1;
    cout<<"enter no of nodes for tree2";
    cin>>n1;
    for(int j=0;j<n1;j++)
    {
        insertnode();
    }
    int o=identical(root,root1);
    if(o==0)
    {
        cout<<"they are not identical";
    }
    else
    {
        cout<<"they are identical";
    }
 return 0;
}