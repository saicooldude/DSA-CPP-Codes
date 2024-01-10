#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void subsequence(int arr[],int n)
{
    sort(arr,arr+n);
    vector<int>vc;
    vc.push_back(arr[0]);
    int i;
    for(i=1;i<n;i++)
    {
        if( arr[i]!=arr[i-1])
        {
            vc.push_back(arr[i]);
        }
    }
    
    int count=1,ans=0;
    for(i=0;i<n;i++)
    {
        if(i>0 && vc[i]==vc[i-1]+1)
        {
            count++;
           
        }
        else
        {
            count=1;
        }
        ans=max(ans,count);

    }
  cout<<ans;
   
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
    subsequence(arr,n);
    /*for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }*/

}