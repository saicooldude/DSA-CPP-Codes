#include<iostream>
using namespace std;
int binarysearch(int arr[],int lb,int ub,int x)
{
    while(lb<=ub)
    {
    int mid=(lb+ub)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        return binarysearch(arr,lb,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return binarysearch(arr,mid+1,ub,x);
    }
    }
   return -1;
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
    int x;
    cin>>x;
    int c=binarysearch(arr,0,n-1,x);
    cout<<arr[c];

}