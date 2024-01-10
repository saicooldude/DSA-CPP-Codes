#include<iostream>
using namespace std;
int function(int arr[],int n)
{
    int i,far,end;
    far=end=0;

    for(i=0;i<n;i++)
    {
        end=end+arr[i];
        if(far<end)
        {
            far=end;
        }
        if(end<0)
        {
            end=0;
        }

    }
    return far;

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
    cout<<function(arr,n);
}