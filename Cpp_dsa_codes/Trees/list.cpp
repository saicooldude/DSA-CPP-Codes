#include<iostream>
using namespace std;
#include<list>
#include<vector>
int main()
{
    /*list<int> lt;
    lt.push_back(2);
    lt.push_back(3);
    lt.push_front(1);
    list<int> ::iterator it=lt.begin();
    cout<<lt.max_size()<<endl;
    for(auto x:lt)
    {
        cout<<x<<endl;
    }
    cout<<endl;
    vector<int> vt(3,2);
    cout<<vt.max_size();
    */
   list<pair<int,char>> lt;
   list<int> lo;
   lo.push_back(1);
   lt.emplace_front(2,'b');
   lt.emplace_back(3,'c');
   lo.push_front(0);
   for(auto x: lt)
   {
       cout<<x.first<<" "<<x.second<<endl;
   }
   for(auto x:lo)
   {
       cout<<x;
   }
   cout<<"******************"<<endl;
   list<int> lk(3,33);
   list<int> kk(4,50);
   kk.swap(lk);
   /*for(auto x:lk)
   {
       cout<<x;
   }
   */
   auto it=lk.begin();
   auto kl=lk.end();
   kk.splice(kk.begin(),lk,it,kl);
   //kk.remove(50);
   //kk.unique();
   kk.push_back(10000);
   kk.reverse();
   for(auto y:kk)
   {
       cout<<y;
   }
   
   


}
