#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int next(int arr[],int n)
{
    int i;
    for(i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            break;
        }
        
    }
    if(i==0)
    {
        return -1;
    }
    int x=arr[i-1],smallest=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]>x && arr[j]<arr[smallest])
        {
            smallest=j;

        }
    }
    swap(&arr[smallest],&arr[i-1]);
    sort(arr+i,arr+n);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int kl=next(arr,n);
    if(kl==-1)
    {
        cout<<"nothing";
    }
    else
    {
        for(int k=0;k<n;k++)
        {
            cout<<arr[k];
        }
    }
}