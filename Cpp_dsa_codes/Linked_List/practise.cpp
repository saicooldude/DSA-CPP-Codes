#include<iostream>
using namespace std;
#include<stack>
#include<stdio.h>
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
struct node*p;
void preordertraversal(node *p)
{
    
    if(p==NULL)
    {
        
        return;
    }
    cout<<p->data;
    preordertraversal(p->left);
    
    
    preordertraversal(p->right);

}
void inordertraversal()
{
    stack<struct node*> st;
    struct node *curr=root;

     while(1)
     {
         while(curr)
         {
             st.push(curr);
             curr=curr->left;
         }
         if(st.empty())
         {
             break;
         }
         curr=st.top();
         st.pop();
         cout<<curr->data;
         curr=curr->right;
     }
    

}

node *queue[100];
int front=-1;
int rear=0;
void enqueue(node *p)
{
    queue[rear]=p;
    rear++;
}
node* dequeue()
{
    front++;
    node *v=queue[front];
    return v;

}

void bfs()
{
    enqueue(root);
    while(front!=rear-1)
    {
        node *p=dequeue();
        cout<<p->data;
        if(p->left)
        {
            enqueue(p->left);
        }
        if(p->right)
        {
            enqueue(p->right);
        }
    }
}
int  height(node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    int ls=height(p->left);
    int rs=height(p->right);
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
int k=6;
int sum=0;
void sumoftree(node *p)
{
    if(p==NULL)
    {
        return ;
    }
    sum=sum+(p->data);
    if(sum==k)
    {
        cout<<"sum is there in the given tree";
    }
    sumoftree(p->left);
    sumoftree(p->right);
    sum=sum-(p->data);
}


int ancestors(node *p,node *target)
{
    if(p!=NULL)
    {
        if(p->data==target->data)
        {
            cout<<p->data<<"->";
            return 1;
        }
        if(ancestors(p->left,target) ||  ancestors(p->right,target))
        {
            cout<<p->data;
            return 1;
        }
    }
    return 0;
}




int main()
{
    int n;
    cout<<"enter the no of nodes";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        addnode();

    }
    /*
    struct node *u=new node;
    u->data=6;
    cout<<ancestors(root,u);
    */
   for(int i=0;i<n;i++)
    {
        addnode1();

    }
   identical(root,root1);
    
    
    return 0;


}
