#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void sizen(int arr[],int n,int size)
{
    
    sort(arr,arr+n);
    
    int count=1,ans=1,i;
    vector<int> vec;
    for(i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        ans=max(ans,count);
        
        if(ans!=count)
        {
            if(ans>size)
            {
                cout<<"sai";
            vec.push_back(arr[i-1]);
            ans=1;
            count=1;

            }
            else
        {
            ans=1;
            count=1;
        }
            

        }
        
    }
    if(ans>size)
    {
        vec.push_back(arr[n-1]);
    }
    for(i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

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
    int x;
    cout<<"enter element";
    cin>>x;

   sizen(arr,n,n/x);
    

}