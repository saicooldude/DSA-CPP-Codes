#include<iostream>
using namespace std;
int multiply(int res[],int size,int i)
{
    int carry=0,resa,j;
    for(j=0;j<size;j++)
    {
        resa=res[j]*i+carry;
        res[j]=resa%10;
        carry=resa/10;

    }
    while(carry)
    {
        res[size]=carry%10;
        size++;
        carry=carry/10;
    }
 return size;
}
void factorial(int n)
{
    int res[1000];
    int size=1,i;
    res[0]=1;
    for(i=2;i<=n;i++)
    {
        size=multiply(res,size,i);
    }
    for(i=size-1;i>=0;i--)
    {
        cout<<res[i];
    }

}

int main()
{
    int i,n;
    cin>>n;
    factorial(n);
    return 0;
}