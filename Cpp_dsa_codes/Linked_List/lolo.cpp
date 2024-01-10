#include<iostream>
using namespace std;
int function(int arr[],int n)
{
    int dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=0;
    }
    int ans=max(0,arr[0]);
    for(int i=1;i<n;i++)
    {
        dp[i]=Max(dp[i-1]+arr[i],arr[i]);
        ans= max(ans,dp[i]);

    }
    cout<<max(ans,dp[i]);
    
}
int main()
{
    int arr[6]={1,-2,3,4,5,6};   
    cout<<function(arr,6);
    return 0;

    
}
