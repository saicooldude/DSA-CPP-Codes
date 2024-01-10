#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string.h>
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    int l1=strlen(str1);
    for(int i=0;i<=strlen(str2);i++)
    {
        str1[l1+i]=str2[i];
    }
    cout<<str1;


}