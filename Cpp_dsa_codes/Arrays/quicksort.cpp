#include<iostream>
using namespace std;
int partition(int arr[],int lb,int ub)
{
    int start=lb;
    int end=ub;
    int pivort=arr[lb];
    while(start<end)
    {
        while(arr[start]<=pivort)
        {
            start++;
        }
        while(arr[end]>pivort)
        {
            end--;
            
        }
        if(start<end)
        {
            int temp;
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }

    }
    int tm;
    tm=arr[end];
    arr[end]=arr[lb];
    arr[lb]=tm;
    return end;

}
void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);


    }

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

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}