#include<iostream>
using namespace std;
#include<unordered_set>
#include<map>
int main()
{
    unordered_multiset<int> st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    st.insert(4);
    st.insert(5);
    for(auto ite=st.begin();ite!=st.end();ite++)
    {
        cout<<*ite<<endl;
    }
    int n=st.bucket_count();
    for(int i=0;i<n;i++)
    {
        cout<<"FOR BUCKET "<<i<<"NO OF ELEMENTS ARE"<<st.bucket_size(i)<<" ";
        for(auto ite=st.begin(i);ite!=st.end(i);ite++)
        {
            cout<<*ite<<ends;
        }
       cout<<endl;

    }
    map<int,int > mk;
    mk[1]=2;
    mk[1]=2;
    mk[1]=2;
    mk[1]=2;
    mk[1]=2;
    
    auto et=mk.equal_range(1);
    /*for(auto ert=et.first;ert!=et.second;ert++)
    {
        cout<<*ert;
    }*/
    for(auto art=et.first;art!=et.second;art++)
    {
        cout<<art->first<<art->second<<endl;
    }
return 0;
}
