#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<string,int> coffee;
    coffee["capteno"]=199;
    coffee["bru coffee"]=399;
    coffee["nescafe tea"]=299;
    coffee.insert(make_pair("cold coffee",40));
    cout<<coffee["nescafe tea"];
    if(coffee.find("capteno")==coffee.end())
    {
        cout<<"coffee available";
    }
    else
    {
        cout<<"cofee not available";
    }
    map<string,int>::iterator it=coffee.begin();
    for(it;it!=coffee.end();it++)
    {
        cout<<"first element"<<it->first<<"->"<<"second element"<<it->second<<endl;
    }
    
    return 0;
}