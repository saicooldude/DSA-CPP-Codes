#include<iostream>
using namespace std;
#include<stack>

struct node
{
    struct node *left;
    int data;
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
       struct node *current=root;
       struct node *parent=root;
       while(current)
       {
           parent=current;
           if(temp->data>current->data)
           {
               current=current->right;
           }
           else
           {
               current=current->left;
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
stack<node*> st1;
stack<node*>st2;
struct node *q;

void zigzagtraversal(node *p)
{
    st1.push(p);
    while(!st1.empty()|| !st2.empty())
    {
        while(!st1.empty())
        {
            q=st1.top()
            cout<<q->data;
            st1.pop();
            if(q->left)
            {
                st2.push(q->left);
            }
            if(q->right)
            {
                st2.push(p->right);
            }
        }
        while(!st2.empty())
        {
            q=st2.top();
            cout<<q->data;
            st2.pop();
            if(q->right)
            {
                st1.push(q->right);
            }
            if(q->left)
            {
                st1.push(q->left);
            }
        }

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
    zigzagtraversal(root);

    
    return 0;
}