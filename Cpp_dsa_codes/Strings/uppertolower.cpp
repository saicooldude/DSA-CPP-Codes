#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    cout<<str;

}