#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX=10
int [MAX] queue;
int rear=-1;
int front=-1;
int main()
{
    int i;
    do
    {
        cout<<"ENTER THE OPERATION ";
        cout<<"1 for insertion";
        cout<<"2 for deletion";
        cout<<"3 for peek element";
        cout<<"4 for traversing";
        cout<<"5 for none";
        cin>>i;
        switch(i)
        {
            case 1:
            insertion();
            break;
            case 2:int u=deletion();
            if(u==-1)
            {
                cout<<"deletion is not possible";
            }
            else
            {
                cout<<"element"<<u<<"deleted";
            }
            break;
            case 3:int p=peek element();
            if(p==-1)
            {
                cout<<"queue is empty";
            }
            else
            {
                cout<<"peek element is "<<p;
            }
            break;
            case 4:traversing();
            break;
            
        }while(i!=5);
        return 0;
        
    }
}
void insertion()
{
    int g;
    cout<<"enter the element that you want to insert";
    cin>>g;
    if(rear==MAX-1)
    {
        cout<<"overflow";
    }
    else if(rear==-1 && front==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear++;

    }
    queue[rear]=g;
}
int deletion()
{
 if(front>rear  || rear=-1)
 {
     return -1;

 }
 else
 {
     int h=queue[front];
     front++;
     if(front>rear)
     {
         front=rear=-1;
     }
     return h;

 }
}
int peek()
{
    if(front>rear || front==-1)
    {
        return -1;
    }
    else
    {
        return queue[front];
    }

}
void traversing()
{
    if(front>rear || rear==-1)
    {
        cout<<<"there are no elements";
    }
    else
    {
        cout<<"elements present in queue is";
        for(int i=front;i<rear;i++)
        {
            cout<<queue[i]<<endl;
        }
    }
}

