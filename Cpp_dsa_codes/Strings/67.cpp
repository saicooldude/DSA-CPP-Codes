#include<iostream>
using namespace std;
int equal(string mm)
{
    int count0=0;
    int count1=0;
    int final_count=0;
    for(int i=0;i<mm.length();i++)
    {
        if(mm[i]=='0')
        {
            count0++;
        }
        else
        {
            count1++;
        }
        if(count0==count1)
        {
            final_count++;
            count0=0;
            count1=0;
        }

    }
    if(count0!=count1)
    {
        return -1;
    }
    return final_count;

}
int main()
{
    string mm;
    cin>>mm;
    int n=equal(mm);
    if(n==-1)
    {
        cout<<"we can't split";
    }
    else
    {
        cout<<"we can split the string into "<<n<<"equal parts";
    }
}