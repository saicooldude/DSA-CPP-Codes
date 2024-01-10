#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(i=0;i<n;i++)
    {
        mp[arr[i]]++;

    }
    for(i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            cout<<arr[i];
            break;
        }
    }
    if(i==n)
    {
        cout<<"There are no repetative elements";
    }
    return 0;
}