#include<iostream>
using namespace std;
#include<string>
int checkrotation(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return 0;

    }
    string temp;
    temp=s1+s1;
    if(temp.find(s2)!=string::npos)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
int main()
{
    string s1,s2,temp;
    cin>>s1>>s2;
    if(checkrotation(s1,s2))
    {
        cout<<"strings are rotations of each other";
    }    
    else
    {
        cout<<"strings are not rotations of each other";
    }


}//geeks for geeks