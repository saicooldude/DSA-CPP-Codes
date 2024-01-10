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
node *queue[100];
int front=-1;
int rear=0;
void enqueue(node *root)
{
    queue[rear]=root;
    rear++;
}
node *dequeue()
{
    front++;
    node *c=queue[front];
    return c;

}
void bfs()
{
enqueue(root);
while(front!=rear-1)
{
    node *u=dequeue();
    cout<<u->data;
    if(u->left)
    {
        enqueue(u->left);

    }
    if(u->right)
    {
        enqueue(u->right);
    }
}
}
void dfs()
{
    struct node *curr=root;
    stack<struct node *> st;
    while(1)
    {
        while(curr)
        {
            cout<<curr->data;
            st.push(curr);
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
    int n;
    cout<<"enter no of nodes";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();
    }
    bfs();
    cout<<"******************DFS*******************";
    dfs();
}