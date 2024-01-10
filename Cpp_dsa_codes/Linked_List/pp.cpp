#include<iostream>
using namespace std;
#include<stack>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* root=NULL;
void addnode()
{
    struct node* temp=new node;
    cout<<"enter data part";
    cin>>temp->data;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* parent=root;
        struct node* curr=root;
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
        if(temp->data > parent->data)
        {
            parent->right=temp;
        }
        else
        {
            parent->left=temp;
        }
    }

}


void preordertraversal()
{
    struct node* curr=root;
    stack<struct node*> st;
    while(1)
    {
        while(curr)
        {
            
            st.push(curr);
            cout<<curr->data;
            curr=curr->left;
        }
        if(st.empty())
        {
            break;
        }
        curr=st.top();
        st.pop();
        
        curr=curr->right;
    }
    
}
int main()
{
    int n=6;
   for(int i=0;i<n;i++)
   {
       addnode();
   }
    preordertraversal();
}