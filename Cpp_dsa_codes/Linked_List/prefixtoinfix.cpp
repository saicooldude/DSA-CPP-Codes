#include<iostream>
using namespace std;
#include<stack>

bool isoperator(char x) { 
switch (x) { 
case '+': 
case '-': 
case '/': 
case '*': 
	return true; 
} 
return false; 
} 

void prefixtoinfix(string exp)
{
    stack<string> st;
    
    int j=exp.length();
    string s=exp;
    for(int i=j-1;i>=0;i--)
    {
        if(isoperator(s[i]))
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            
            string temp="("+ op1 + s[i] + op2+ ")";
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
    prefixtoinfix(exp);
    return 0;
}