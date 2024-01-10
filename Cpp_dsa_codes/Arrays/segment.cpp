#include<iostream>
using namespace std;
/*int segment(int arr[],int n,int seg,int x)
{
    int i;
    int lb=0;
    int ub=seg-1;
    int j=0,sum=0;
    while(ub<=n-1)
    {
        for(i=lb;i<=ub;i++)
        {
            if(arr[i]==x)
            {
                j=1;
                
            }
        }
        
        lb=ub+1;
        ub=ub+seg;
        sum=sum+j;
        j=0;
    }

    int tg=0;
    if(lb<=n-1)
    {
        for(j=lb;j<=n-1;j++)
        {
            if(arr[j]==x)
            {
                tg=1;
            }
        }
    }
    int final=n/3;
    if(lb<=n-1)
    {
        if(sum==final && tg==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        

    }
    else if(lb>n-1)
    {
        if(sum==final)
        {
            return 1;
        }
        
        
    }
    return 0;
}*/
bool findk(int arr[],int n,int k,int x)
{
    int i,j;
    for(i=0;i<n;i=i+k)
    {
        for(j=0;j<k;j++)
        {
            if(arr[i+j]==x)
            {
                break;
            }
        }
        if(j==k)
        {
            return false;
        }
    }
    if(i==n)
    {
        return true;
    }
    
    for(j=i-k;j<n;j++)
    {
        if(arr[j]==k)
        {x`
            break;
        }
    }
        if(j==n)
        {
            return false;
        }
        return true;
    
    


}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int seg;
    cout<<"Enter segment";
    cin>>seg;
    int x;
    cout<<"Enter the element";
    cin>>x;
    //cout<<segment(arr,n,seg,x);
    if(findk(arr,n,seg,x))
    {
        cout<<"yes ";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}