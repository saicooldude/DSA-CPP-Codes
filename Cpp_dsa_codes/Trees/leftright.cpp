#include<iostream>
using namespace std;
#include<list>
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
            if(parent->data > temp->data)
            {
                curr=curr->left;
            }
            if(parent->data <temp->data)
            {
                curr=curr->right;
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
void levelordertraversal(node* root)
{
    list<node*> qt;
    qt.push_back(root);
    while(!qt.empty())
    {
        int n=qt.size();
        int i=0;
        while(i < n)
        {
            node *p=qt.front();
            qt.pop_front();
            
            if(i==0)
            {
            cout<<p->data<<" ";
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
        cout<<endl;
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
    cout<<"*************************";
   levelordertraversal(root);
    return 0;
}