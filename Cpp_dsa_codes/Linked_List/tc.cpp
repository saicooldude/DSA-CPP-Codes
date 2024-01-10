#include<iostream>
using namespace std;
int main()
{
    string ms;
    cin>>ms;
    string ss;
    cin>>ss;
    int msl=ms.length();
    int ssl=ss.length();
    int i,j;
    for(i=0;i<msl;i++)
    {
        for(j=0;j<ssl;j++)
        {
            if(ss[j]==ms[i])
            {
                cout<<ss[j];
            }

        }
    }
   


}