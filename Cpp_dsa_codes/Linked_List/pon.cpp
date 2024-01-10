#include<iostream>
using namespace std;
int main()
{
    int a=90;
    int *p;
    p=&a;
    int **o=&(p);
    int ***u=&(o);
    cout<<***u<<endl;
    cout<<**o<<endl;
    cout<<*p;
    
    return 0;
}