#include<iostream>
using namespace std;
void removing(string s)
{
    if(s=='\0')
    {
        return;
    }
    if(s[0]==s[1])
    {
        int i=0;
        while(s[i]!='\0')
        {
            s[i]=s[i+1];
            i++;
        }
        removing(s);
    }
    removing(s+1);
    
}


int main()
{
    string s;
    cin>>s;
    removing(s);
}