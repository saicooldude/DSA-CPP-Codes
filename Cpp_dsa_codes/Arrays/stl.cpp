#include<iostream>
using namespace std;
#include<vector>
#include<set>
int main()
{
    vector<int> vt;
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);
    vt.push_back(4);
    vt.push_back(5);
    
    auto it=vt.begin();//we cant change the values int the vector using this iterator *it=*it+1;
    //auto it=vt.crbegin();
    //auto it=vt.cbegin();
    // vt.reverse(5);
    vt.erase(it);
    for(it;it!=vt.end();it++)
    {
        /*if(*it==3)
        {
            vt.erase(it);
        }*/
       cout<<*it;
    }     
    
    /*if(vt[2]==3)
    {
        //cout<<"vhjmfcvc";
    }*/
    cout<<"****************";
    //cout<<vt.size()<<endl<<vt.max_size()<<endl<<vt.capacity()<<endl<<vt.empty();
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
   for(auto ht : vt)
   {
       cout<<ht;
   }
   
}