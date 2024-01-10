#include<iostream>
using namespace std;
int matrix[5][5];
void add(int i,int j,int n)
{
    int x=2,k;
    for(k=i+1;k<n;k++)
    {
        matrix[k][j]=x++;
    }
    for(k=0;k<i;k++)
    {
        matrix[k][j]=x++;
    }

}

void matrixformation(int n)
{
    int left=0,right=n-1,i;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            matrix[i][right]=1;
            add(i,right,n);
            right--;


        }
        else if(i%2==1)
        {
            matrix[i][left]=1;
            add(i,left,n);
            left++;

        }
    }
}
int main()
{
    int n;
    cin>>n;
    matrixformation(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

}