#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int lr=2*i+1;
    int rr=2*i+2;
    int index=largest;
    if(lr<n && arr[largest]<arr[lr])
    {
        swap(arr[largest],arr[lr]);
        index=lr;
    }
    if(rr<n && arr[largest]<arr[rr])
    {
        swap(arr[largest],arr[rr]);
        index=rr;
    }
    if(index!=i)
    {
        heapify(arr,n,index);
    }

}
int main()
{
    int arr[1000]={10,5,3,2,4};
    int n=5;
    arr[0]=arr[n-1];
    n=n-1;
    int i=0;
    heapify(arr,n,i);

    
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}