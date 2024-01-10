#include<iostream>
using namespace std;
#include<stack>
#define N 8
bool MATRIX[N][N]={{0,0,1,0},
                    {0,0,1,0},
                    {0,1,0,0},
                    {0,0,1,0}};



bool knows(int a,int b)
{
    return MATRIX[a][b];
}
int findcelebraty(int n)
{
    int a=0;
    int b=n-1;
    while(a<b)
    {
        if(knows(a,b))
        {
            a++;
        }
        else
        {
            b--;

        }
    }
    for(int i=0;i<n;i++)
    {
        while((i!=a) && (knows(a,i) || !knows(i,a)))
        {
            return -1;
        }
    }
    return a;


}
int main()
{
    int n;
    cin>>n;
    int k=findcelebraty(n);
    if(k==-1)
    {
        cout<<"there is no celebraty in the function";
    }
    else
    {
        cout<<"id no"<<k<<"is the celebraty in the function";
    }
    return 0;

}
