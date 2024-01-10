#include<iostream>
using namespace std;
towerofhanoi(int n,char from_rod,char to_rod,char aux_rod)
{
    if(n==1)
    {
        cout<<from_rod<<"   "<<to_rod<<endl;
        return 0;
    }
    towerofhanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<from_rod<<"   "<<to_rod<<endl;
    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
    int n=4;
    towerofhanoi(n,'a','c','b');
    return 0;
}