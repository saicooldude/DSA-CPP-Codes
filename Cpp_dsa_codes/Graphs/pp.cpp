#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>
void function(int arr[])
{
    arr[1]=2;
    
}
int main()
{
    int arr[5]={0,0,0,0,0};
  

    function(arr);
    for(auto x:arr)
    {
        cout<<x;
    }
    
    
}