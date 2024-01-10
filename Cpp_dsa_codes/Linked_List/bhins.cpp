#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int parent=(i-1)/2;
    if(arr[parent]>0)
    {
        if(arr[i]>arr[parent])
        {
            swap(arr[i],arr[parent]);
            heapify(arr,n,parent);
    }}

}

int main()
{
    
    int arr[1000]={10,5,3,2,4};
    int key;
    cin>>key;
    int n=5;
    n=n+1;
    arr[n-1]=key;
    heapify(arr,n,n-1);
    for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }

    return 0;
}