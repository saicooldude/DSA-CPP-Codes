#include<iostream>
using namespace std;
#include<set>
#include<string>
int main()
{
    multiset<string>ht;
    ht.insert("ab");
    ht.insert("aab");
    ht.insert("ca");
    ht.insert("da");
    ht.insert("ea");
    ht.insert("fa");
    ht.insert("ga");
    //auto it=ht.find("ca");
    ht.insert("za");
    ht.insert("ya");
    ht.insert("xa");
    /*set<string> st;
    st.insert("99");
    st.insert("999");*/
    ht.insert("ab");
    ht.insert("aab");
    ht.insert("ca");
    ht.insert("da");
   
    /*ht.insert(st.begin(),st.end());
    for(auto it=ht.begin();it!=ht.end();it++)
    {
        cout<<*it<<endl;
    }
    /*cout<<(0 ?"sai":"nara");
    //ht.erase(ht.begin(),ht.find('f'));
    while(!ht.empty())
    {
        cout<<*ht.begin()<<" ";
        ht.erase(ht.begin());
    }*/
    auto it=ht.equal_range("aab");
    //ht.erase(it.first,it.second);
    for(auto x=it.first;x!=it.second;x++)
    {
        cout<<*x;
    }
    



}