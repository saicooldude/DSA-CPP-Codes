#include<iostream>
using namespace std;
#include<unordered_map>
void method1(int arr[],int n,int sum)
{
    int count=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                count++;
            }
        }

    }
    cout<<count;

}
void method2(int arr[],int n,int sum)
{
    int i;
    unordered_map<int,int> unmap;
    for(i=0;i<n;i++)
    {
        unmap[arr[i]]=unmap[arr[i]]+1;

    }
    int twice_count=0;
    for(i=0;i<n;i++)
    {
        twice_count=twice_count+unmap[sum-arr[i]];
        if(sum-arr[i]==arr[i])
        {
            twice_count--;
        }

    }
    cout<<twice_count/2;
}
int main()
{
    int n,i,sum;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of number";
    cin>>sum;
    method1(arr,n,sum);
    method2(arr,n,sum);
}