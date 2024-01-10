#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0;
    cin>>n;
    int arr[n];
    int check[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        check[i]=0;
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<=n)
        {
            check[arr[i]-1]=1;
        }
    }
   for(i=0;i<n;i++)
   {
       if(check[i]==0)
       {
           cout<<i+1;
       }
   }
}