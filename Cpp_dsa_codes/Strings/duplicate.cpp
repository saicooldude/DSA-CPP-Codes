#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<map>
#include<stdio.h>
#include<string>
int main()
{
   string s;
   getline(cin,s);
    
    int n=s.length();
    int i;
    map<char,int> ump;
    for(i=0;i<n;i++)
    {
        ump[s[i]]++;
    }
    for(auto x:ump)
    {
        if(x.second>1)
        {
            cout<<x.first<<" "<<x.second<<endl;

        }
    }
}