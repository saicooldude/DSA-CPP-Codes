#include<iostream>
using namespace std;
int get1(int key)
{
    return key%10;

}
void insert(int h[],int key)
{
     int index;    
     index=get1(key);
    int i=0;
    while(h[(index+i)%10]!=0)
    {
        i++;
    }
    h[index+i]=key;
    
}
int search(int h[],int key)
{
    int index=get1(key);
    int i=0;
    while(h[(index+i)%10]!=key)
    {
        i++;
    }
    return (index+i)%10;

}


int main()
{
    int h[10];
    for(int i=0;i<10;i++)
    {
        h[i]=0;
    }
    insert(h,21);
    insert(h,223);
    insert(h,224);
    insert(h,25);
    insert(h,225);
    insert(h,27);
    insert(h,88);
    insert(h,219);
    insert(h,200);
    cout<<search(h,225);
return 0;
}