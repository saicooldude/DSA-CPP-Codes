#include<iostream>
using namespace std;
#include<list>
int main()
{
list<int> lt;
lt.push_back(10);
lt.push_back(20);
lt.push_back(30);
lt.push_back(40);
lt.push_back(50);
lt.push_front(100);
list<int>::iterator it=lt.begin();
lt.insert(it,40);
for(it=lt.begin();it!=lt.end();it++)
{
    if(*it==20)
    {
        lt.insert(it,5000);
    }
}
lt.pop_back();
for(it=lt.begin();it!=lt.end();it++)
{
    cout<<*it;
}

}