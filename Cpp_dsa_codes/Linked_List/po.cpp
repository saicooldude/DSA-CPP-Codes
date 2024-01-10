#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;

    }
    else
    {
        return -1;
    }
}

string infixtopostfix(string exp)
{
stack<int> st;
st.push('N');
string ns;
string s=exp;
int h=s.length();

int i;
for(i=0;i<h;i++)
{
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
    {
         ns=ns+s[i];
    }
    else if(s[i]=='(')
    {
        st.push(s[i]);
    }
    else if(s[i]==')')
    {
        while(st.top()!='('&&st.top()!='N')
        {
            char a=st.top();
            
            st.pop();
            ns=ns+a;
        }
        if(st.top()=='(')
        {
            st.pop();
        }
    }
    else
    {
        while(st.top()!='N' && prec(s[i])<=prec(st.top()))
        {
            char h=st.top();
            
            st.pop();
            ns=ns+h;
        }
        st.push(s[i]);


    }
}
if(st.top()!='N')
{
    char t=st.top();
    
    st.pop();
    ns=ns+t;
}
return ns;


}
int infixtoprefix(string exp)
{
    reverse(exp.begin(),exp.end());
    int j=exp.length();
    for(int i=0;i<j;i++)
    {
        if(exp[i]=='(')
        {
            exp[i]=')';
            i++;
        }
        else if(exp[i]==')')
        {
            exp[i]='(';
            i++;
        }
    }
    string lol=infixtopostfix(exp);
    reverse(lol.begin(),lol.end());
    cout<<lol;
}
int main()
{
    string exp="(a-b/c)*(a/k-l)";
    infixtoprefix(exp);
    
    return 0;
}