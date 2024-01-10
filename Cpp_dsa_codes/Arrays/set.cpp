#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    auto ite=st.find(2);
    /*if(ite!=st.end())
    {
        cout<<*ite;
    }*/
    for(auto ite=st.begin();ite!=st.end();ite++)
    {
        cout<<*ite<<" ";
    }
    
}