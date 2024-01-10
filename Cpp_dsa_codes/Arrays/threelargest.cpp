#include<iostream>
using namespace std;
void function(int arr[],int n)
{
    int i,first,second,third;
    if(n<3)
    {
        cout<<"LIMIT UNREACHBLE";
    }
    first=second=third=INT_MIN;
   for(i=0;i<n;i++)
   {
       if(arr[i]>first)
       {
           third=second;
           second=first;
           first=arr[i];
       }
       else if(arr[i]>first)
       {
           third=second;
           second=arr[i];

       }
       else
       {
           third=arr[i];
       }

          
   }

cout<<first<<endl<<second<<endl<<third;


}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
    function(arr,n);
}