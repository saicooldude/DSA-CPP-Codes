#include<iostream>
using namespace std;

int main()
{ 
    int i,j,count,assign,maxcount=0;
    int arr[5][5]={{0,1,0,0,0},{0,1,1,1,1},{0,1,0,1,1},{0,0,0,0,0},{1,1,1,1,1}};
    for(i=0;i<5;i++)
    {
        count=0;

        for(j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            assign=i;
        }
    }
    cout<<assign;
}