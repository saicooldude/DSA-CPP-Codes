#include<stack>
#include<iostream>
using namespace std;
int main()
{
    int i;
    stack <int> st,st1;
    for(i=0;i<10;i++)
    {
        st.push(i);
    }
    for(i=0;i<7;i++)
    {
        st1.push(i);
    }
    st.pop();
    
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    cout<<st1.size()<<endl;
     
    cout<<st.top()<<endl;
    return 0;

}