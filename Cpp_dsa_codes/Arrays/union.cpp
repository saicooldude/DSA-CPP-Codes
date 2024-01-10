#include<iostream>
using namespace std;
#include<unordered_set>
int main()
{
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int arr1[n1];
    int arr2[n2];
    int i,j;
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    i=0;
    j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i];
            i=i+1;
        }
        else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j];
            j=j+1;
        }
        else if(arr2[j]==arr1[i])
        {
            cout<<arr2[j];
            i=i+1;
            j=j+1;
        }

    }
    while(i<n1)
    {
        cout<<arr1[i++];
    }
    while(j<n2)
    {
        cout<<arr2[j++];

    }


}