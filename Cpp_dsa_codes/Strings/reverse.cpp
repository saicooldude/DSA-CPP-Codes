#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[20];
    gets(str);
    int n=strlen(str);
    int i=0,j=n-1;
    while(i<j)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;

    }
    cout<<str;
    


}