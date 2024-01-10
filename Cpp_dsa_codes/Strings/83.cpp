#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string str[n];
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int length[n];
    for(i=0;i<n;i++)
    {
        length[i]=str[i].length();
    }
    
    int size=length[0];
    for(i=0;i<n;i++)
    {
        if(length[i]<size)
        {
            size=length[i];
        }
    }
    i=0;
    int tag=0;
    
    while(i<size)
    {
        char ch=str[0][i];
        for(int j=0;j<n;j++)
        {
            cout<<"sai"<<endl;
            if(str[j][i]!=ch)
            {
                tag=1;
                break;
            }
            
        }
        if(tag==1)
        {
            break;
        }
        i++;

    }
    for(int j=0;j<i;j++)
    {
        cout<<str[0][j];
    }
    return 0;

}