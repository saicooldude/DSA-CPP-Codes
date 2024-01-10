#include<iostream>
using namespace std;
#include<stack>
bool isoperator(char x)
{
    switch(x)
    {
        case '+':
        case '-':
        case '/':
        case '*':
        case '^':
        return true;
    }
    return false;
}
void prefixtopostfix(string exp)
{
    int len=exp.length();
    string s=exp;
    stack<string> st;
    for(int i=len-1;i>=0;i--)
    {
        if(isoperator(s[i]))
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            string temp=op1+op2+s[i];
            st.push(temp);
        }
        else
        {
            st.push(string(1,s[i]));
        }
    }
    cout<<st.top();
}

int main()
{
    string exp="*-A/BC-/AKL";

    prefixtopostfix(exp);
    return 0;
}