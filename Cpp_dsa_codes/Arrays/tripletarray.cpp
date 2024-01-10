#include<iostream>
using namespace std;
int tripletsum(int arr[],int n,int sum)
{
    int i,lb,ub;
    for(i=0;i<=n-2;i++)
    {
        lb=i+1;
        ub=n-1;
        while(lb<ub)
        {
            if(arr[i]+arr[lb]+arr[ub]==sum)
            {
                return 1;
            }
            else if(arr[i]+arr[lb]+arr[ub]<sum)
            {
                lb++;
            }
            else if(arr[i]+arr[lb]+arr[ub]>sum)
            {
                ub--;

            }
        }


    }
    return 0;

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
    int sum;
    cin>>sum;
    cout<<tripletsum(arr,n,sum);
    return 0;
}
