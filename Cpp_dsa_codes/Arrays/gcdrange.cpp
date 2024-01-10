#include<iostream>
using namespace std;
void function(int arr[],int n,int lb,int ub)
{
    int i,j;
    int count=0,gcd=0;
    int min=arr[lb];
    for(i=lb;i<=ub;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    
    for(i=1;i<=min;i++)
    {
        
        for(j=lb;j<=ub;j++)
        {
            if(arr[j]%i==0)
            {
                count++;
            }
        }
        
        
        if(count==ub-lb+1)
        {
            gcd=i;
            
        }
        count=0;
    } 
    cout<<gcd;
       
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
    int lb,ub;
    cout<<"enter the lower bound";
    cin>>lb;
    cout<<"Enter the upper bound";
    cin>>ub;
    cout<<"***********************";
    function(arr,n,lb,ub);
    System.currentTimeMillis();

}