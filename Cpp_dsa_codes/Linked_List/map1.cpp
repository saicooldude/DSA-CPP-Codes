#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["sai"]=10;
    mp["sas"]=20;
    mp["sais"]=30;
    mp.insert(make_pair("ksai",50));
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
    if(mp.find("sai")!=mp.end())
    {
        cout<<"succesfull";
    }
    else
    {
        cout<<"not successfull";
    }
    
    return 0;
}