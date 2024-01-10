#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<cmath>
int reversals()
{
    string str;
    cin>>str;
    int n=str.length(),i;
    stack<char> st1,st2;
    st1.push('e');
    if(n%2==1)
    {
        return -1;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(str[i]=='{')
            {
                st1.push('{');
            }
            else if(str[i]=='}')
            {
                if(st1.top()=='{')
                {
                    st1.pop();
                }
                else
                {
                    st2.push('}');
                }
            }
        }
        
    }
    int s1=st1.size();
    int s2=st2.size();
    s1=s1-1;
    cout<<s1<<s2;
    int ans =ceil(float(s1/2))+ceil(float(s2/2));
    return ans;
    
    
}

int main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        cout<<reversals();
    }
	
	return 0;
}