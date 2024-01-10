#include<iostream>
using namespace std;
#include<stack>
void stackspan(int arr[])
{
    stack<int>st;
    st.push(0);
    int s[15];
    int i;
    s[0]=1;
    
    for(i=1;i<15;i++)
    {
        
        while(!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();

        }
        
        if(st.empty())
        {
            s[i]=i+1;
        }
        else
        {
            s[i]=i-st.top();
        }
        st.push(i);
    }
    
    
    for(i=0;i<15;i++)
    {
        cout<<s[i];
    }

}






int main()
{
    int arr[15],i;
    for(i=0;i<15;i++)
    {
        cin>>arr[i];
    }
    stackspan(arr);
    return 0;

}