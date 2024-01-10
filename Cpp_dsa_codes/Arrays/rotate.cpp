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
    int x=arr[n-1];
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    
    arr[0]=x;
    
    for(i=0;i<=n-1;i++)
    {
        cout<<arr[i];
    }

}