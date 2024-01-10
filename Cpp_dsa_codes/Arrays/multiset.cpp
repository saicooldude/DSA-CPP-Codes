#include<iostream>

#include<set>
using namespace std;

int main()
{
    multiset<int> mst;
    mst.insert(1);
    mst.insert(2);
    mst.insert(2);
    mst.insert(2);
    mst.insert(3);
    mst.insert(4);
    mst.insert(5);
    auto ite1=mst.lower_bound(2);
    auto ite2=mst.upper_bound(2);
    auto ite=mst.equal_range(2);
    //cout<<*(ite.first);
    for(auto it=ite.first;it!=ite.second;it++)
    {
        cout<<*it<<endl;
    }



}