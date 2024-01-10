#include<iostream>
using namespace std;
#include<stack>
stack<int> st1;
stack<int> st2;
void enqueue()
{
    int x;
    cout<<"enter element";
    cin>>x;
    st1.push(x);
}
void dequue()
{
    int a;
    if(st2.empty())
    {
        while(!st1.empty())
        {
           a=st1.top();
           st1.pop();
           st2.push(a); 
        }
    }
    cout<<"element popped successfully"<<" "<<st2.top()<<endl;
    st2.pop();

}
void queuesize()
{
    cout<<st1.size()+st2.size()<<endl;
}
void queueempty()
{
    if(st1.empty() && st2.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue is not empty"<<endl;
    }

}

int main()
{
    int i;
    
    for(int i=0;i<10;i++)
    {
        enqueue();
    }
    dequue();
    dequue();
    queuesize();
   queuesize();
   return 0;


}