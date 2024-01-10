#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int j;
        cin>>j;
        string str;
       cin>>str;
    stack<char> st;
    int i=0,final=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='[')
        {
            st.push('[');
        }
        else if(str[i]==']')
        {
            if(st.empty())
            {
                final++;
                st.push('[');
                
            }
            else
            {
                st.pop();
            }
        }
        
    }
    int ll=st.size();
    final=final+ll/2;
    cout<<final<<endl;
    
    }
    
    
    
	
	return 0;
}