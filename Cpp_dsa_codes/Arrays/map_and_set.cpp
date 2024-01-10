#include<iostream>
using namespace std;
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>
#include<math.h>
int main()
{
    unordered_map<int,int> unmap;
    unmap[1]=2;
    unmap[2]=3;
    unmap[3]=4;
    unmap[4]=5; 
    unmap[2]=222;
    for(auto x : unmap)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<"*******************************************";
    map<int,int> mp;
    mp.insert(pair<int,int>(1,2)); 
    mp.insert(pair<int,int>(2,3));
    mp.insert(pair<int,int>(3,4));
    mp.insert(pair<int,int>(4,5));
    mp.insert(pair<int,int>(2,222));
    for(auto x1 : mp)
    {
        cout<<x1.first<<" "<<x1.second<<endl;
    }
    /*unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    for(auto y : st)
    {
        cout<<y<<endl;
    }
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    set<int> st1;
    st1.insert(1);
    st1.insert(2);
    st1.insert(3);
    st1.insert(2);
    for(auto x : st1)
    {
         cout<<x<<endl;
    }*/
    /*float a=1234,b=-342.2222222;
    cout<<abs(-2.222)<<fabs(-2.222);
  */
}