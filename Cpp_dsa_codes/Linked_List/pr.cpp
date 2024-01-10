#include<iostream>
using namespace std;
struct node
{
    int data;
    int priority;
    node* next;
};
int main()
{
    node *temp=new node;
    temp->data=90;
    cout<<temp->data;

}