#include<iostream>
using namespace std;
void function1(int arr[],int n)
{
    int i,j,k,x;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(arr[i]>0)
            {
                int x=arr[i];
                for(j=i;j<n;j++)
                {
                    if(arr[j]<0)
                    {
                        x=arr[j];
                        break;
                    }
                }
            
                if(arr[i]!=x)
                {
                    for(k=j-1;k>=i;k--)
                    {
                        
                        arr[k+1]=arr[k];


                    }
                      arr[i]=x;

                }

                
            }
            
        

        }
        else if(i%2==1)
        {
            if(arr[i]<0)
            {
                x=arr[i];
                for(j=i;j<n;j++)
                {
                    if(arr[j]>0)
                    {
                        x=arr[j];
                        break;
                    }

                }
                if(x!=arr[i])
                {
                   for(k=j-1;k>=i;k--)
                   {
                       arr[k+1]=arr[k];
                   }

                }
                arr[i]=x;
            }


        }
        
    }

for(i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
void function2(int arr[],int n)
{
    
    int pos[100],neg[100];
    int p=0,nege=0,i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            pos[p++]=arr[i];

        }
        else if(arr[i]<0)
        {
            neg[nege++]=arr[i];
        }
    }
    if(p<nege)
    {
        j=p;
    }
    else
    {
        j=nege;
    }
    for(i=0;i<j;i++)
    {
        cout<<neg[i]<<" "<<pos[i]<<" ";
    }
    if(j<nege)
    {
        for(i=j;i<nege;i++)
        {
            cout<<neg[i]<<" ";

        }

    }
    else if(j<p)
    {
        for(i=j;i<p;i++)
        {
            cout<<pos[i]<<" ";
        }
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
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
    function2(arr,n);
    
}