#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<int> st;
    int arr[6];
    int i;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    st.push(arr[0]);
    for(i=1;i<4;i++)
    {
        if(st.empty())
        {
            st.push(arr[i]);
            continue;
        }
        while(st.empty()==false && st.top()<arr[i])
        {
            cout<<st.top()<<"->"<<arr[i]<<endl;
            st.pop();
        }
        st.push(arr[i]);
    }
    while(st.empty()==false)
    {
        cout<<st.top()<<"->>"<<"none"<<endl;

        st.pop();
    }
    return 0;

}