#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);
    lt.reverse();
    list<int>::iterator it=lt.begin();
    
    cout<<lt(0);
    
    return 0;
}
