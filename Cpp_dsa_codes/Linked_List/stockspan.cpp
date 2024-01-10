#include<iostream>
#include<stack>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int price[6],j;
    int span[6];
    
    int i;
    for( i=0;i<6;i++)
    {
        cin>>price[i];
    }
    stack<int> st;
    span[0]=1;
    st.push(0);
    for(i=0;i<6;i++)
    {
        while(st.empty()!=0 &&(price[st.top()]<=price[i]))
        {
            st.pop();
        }
        if(st.empty())
        {
            span[i]=i++;
        }
        else
        {
            span[i]=i-st.top();
        }
        st.push(i);

    }
    for(i=0;i<6;i++)
    {
        cout<<span[i];
    }
    
    return 0;
    
}
