#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}