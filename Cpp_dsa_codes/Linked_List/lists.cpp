#include<iostream>
#include<list>
using namespace std;
int main()
{
    /*list<int> num;
    num.push_back(20);
    num.push_front(60);
    num.push_back(33);
    num.push_front(88);
    list<int> :: iterator it=num.begin();
    it++;
    it++;
    num.insert(it,6);
    
    for(it=num.begin();it!=num.end();++it)
    {
           if(*it==6)
           {
               num.insert(it,90);
           }
    }
    for(it=num.begin();it!=num.end();++it)
    {
        cout<<*it;
    }*/

   /* num.pop_front();
    cout<<num.empty();
    cout<<num.front();
    list<int> nh;
    nh.assign(num.begin(),num.end());*/
   /* for(it=num.begin();it!=num.end();++it)
    {
        cout<<*it;
    }*/
    
    /*for(it=nh.begin();it!=nh.end();++it)
    {
        cout<<*it;
    }*/
    list<int> lst;
    lst.push_back(23);
    lst.push_back(22);
    lst.push_back(21);
    lst.push_back(19);
    lst.push_back(18);
    lst.push_back(17);
    lst.push_back(18);
    lst.push_back(16);
    list<int>::iterator it;
    it=lst.begin();
    it++;
    //it=lst.erase(it);
    //advance(it,2);
    /*list<int> lst1;
    lst1.resize(5,20);
    lst1.merge(lst);
    lst1.sort();
    lst1.reverse();
    lst1.unique();
    for(it=lst1.begin();it!=lst1.end();it++)
    {
        cout<<*it<<ends;
    }*/
    cout<<endl;
    list<int> lst1;
    lst1.push_back(1);
    lst1.push_back(2);
    lst1.push_back(3);
    lst1.push_back(4);
    lst1.push_back(5);
    list<int>::iterator itl;
    itl=lst1.begin();
    lst.splice(lst.end(),lst1,itl,lst1.end());
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<ends;
    }
    

    
    return 0;

}