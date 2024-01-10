#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    multimap<int,string> coffee;
    coffee.insert(make_pair(40,"sai"));
    coffee.insert(make_pair(80,"nara"));
    coffee.insert(make_pair(10,"sais"));
    coffee.insert(make_pair(40,"sos"));
    multimap<int,string>::iterator it=coffee.begin();
    for(it;it!=coffee.end();it++)
    {
        cout<<"first element"<<it->first<<"->"<<"second element"<<it->second<<endl;
    }
    
    return 0;
}