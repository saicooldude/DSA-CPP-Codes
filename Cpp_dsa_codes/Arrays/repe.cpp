#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
void mathematics(int arr[],int n)
{
    int i,sum=0,product=1,xy=0;
    int plus,pr,minus,x,y;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        product=product*arr[i];
    }
    n=n-2;
    plus=sum-n*(n+1)/2;
    xy=product/fact(n);
    minus=sqrt(plus*plus-4*xy); 
    x=(plus+minus)/2;
    y=(plus-minus)/2;
    cout<<x<<y;


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
    mathematics(arr,n);

}