#include<iostream>
using namespace std;
#include<unordered_set>
int main()
{
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    st.insert(6);
    st.insert(7);
    st.insert(8);
    st.insert(9);
    st.insert(10);
    int n=st.bucket_count();
   /* for(auto x:st)
    {
        cout<<x<<endl;
    }*/
    /*auto x=st.begin();
    for(x;x!=st.end();x++)
    {
        cout<<*x<<endl;
    }
    if(st.find(9)!=st.end())
    {
        cout<<"yes";
    }
    cout<<st.bucket_count()<<st.load_factor()<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<st.bucket_size(i)<<endl;
    }*/
    for(int i=0;i<n;i++)
    {
        cout<<"BASKET size FOR "<<i<< " IS"<<st.bucket_size(i)<<"BASKET ELEMENTS  ARE ";
        for(auto it=st.begin(i);it!=st.end(i);it++)
        {
            cout<<*it<<ends;

        }
        cout<<endl;
    }
    cout<<st.bucket(5)<<endl<<st.load_factor();
 return 0;
}