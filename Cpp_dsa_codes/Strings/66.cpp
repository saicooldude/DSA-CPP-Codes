#include<iostream>
using namespace std;
#include<string.h>
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int jk=0;
void permutation(char name[],int lb,int ub)
{
    if(lb==ub)
    {
        cout<<name<<endl;
        jk++;
        
    }
    else
    {
    for(int i=lb;i<=ub;i++)
    {
        swap(name[i],name[lb]);
        permutation(name,lb+1,ub);
        swap(name[lb],name[i]);


    }
    }

}
int main()
{
    char name[100];
    cin>>name;
    int n=strlen(name);
    permutation(name,0,n-1);
    cout<<endl<<jk;

}