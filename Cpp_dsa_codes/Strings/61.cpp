#include<iostream>
using namespace std;
int interleaving(char s1[],char s2[],char s3[])
{
    while(*s3!=0)
    {
        if(*s1==*s3)
        {
            s1++;
        }
        else if(*s2==*s3)
        {
            s2++;
        }
        else
        {
            return 0;
        }
        s3++;
    }
    if(*s1 || *s2)
    {
        return 0;
    }
    return 1;
    





}
int main()
{
    char s1[100],s2[100],s3[100];
    cin>>s1>>s2>>s3;
    if(interleaving(s1,s2,s3))
    {
        cout<<"intereaving";
    }
    else
    {
        cout<<"not interleaving";
    }
    
    

}
