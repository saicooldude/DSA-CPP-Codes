#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node* left;
    int data;
    struct node* right;
};
struct node *root=NULL;

void addnode()
{
    int n;
    cin>>n;
    struct node *temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *parent=root;
        struct node *child=parent;
        while(child)
        {
            parent=child;
            if(temp->data>parent->data)
            {
                child=child->right;
            }
            if(temp->data <parent->data)
            {
                child=child->left;
            }

        }
        if(temp->data < parent->data)
        {
            parent->left=temp;
        }
        else
        {
              parent->right=temp;
        }

        
    }
    


}
void printdata(struct node *root1)
{
    if(root1==NULL)
    {
        return;
    }
    
    printdata(root1->left);
    cout<<root1->data;
    printdata(root1->right);


}
void specificorder()
{
    list<node*> qt1,qt2;
    qt1.push_back(root->left);
    qt2.push_back(root->right);
    cout<<root->data;
    while(!qt1.empty())
    {
        int size=qt1.size();
        while(size--)
        {
            node* p=qt1.front();
            qt1.pop_front();
            cout<<p->data;
            if(p->left)
            {
                qt1.push_back(p->left);
            }
            if(p->right)
            {
                qt1.push_back(p->right);
            }
            node* q=qt2.front();
            cout<<q->data;
            qt2.pop_front();
            if(q->right)
            {
                qt2.push_back(q->right);
            }
            if(q->left)
            {
                qt2.push_back(q->left);
            }

        }
    }

}
void specificorder1()
{
    list<node*>qt1,qt2,qt3;
    stack<node*>st;
    st.push(root);
    qt1.push_back(root->left);
    qt2.push_back(root->right);
    while(!qt1.empty())
    {
        int n=qt1.size();
        while(n--)
        {
            node* p=qt1.front();
            qt1.pop_front();
            node* q=qt2.front();
            qt2.pop_front();
            if(p->left)
            {
                qt1.push_back(p->left);
            }
            if(p->right)
            {
                qt1.push_back(p->right);
            }
            if(q->right)
            {
                qt2.push_back(q->right);
            }
            if(q->left)
            {
                qt2.push_back(q->left);
            }
            qt3.push_back(p);
            qt3.push_back(q);
        }
       list<node*>::iterator it;
       qt3.reverse();
       for(it=qt3.begin();it!=qt3.end();it++)
       {
           st.push(*it);
       }
       qt3.clear();

    }
    while(!st.empty())
    {
        node* f=st.top();
        st.pop();
        cout<<f->data;
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
   //specificorder1();
   cout<"******************************";
   specificorder1();
   cout<<"&&&&&&&&&&&&&&&&";
   return 0;

}
 