#include<iostream>
#include<cmath>

#include<list>
using namespace std;
int main()
{
    list<int > lt(3,10);
    lt.assign(4,20);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    list<int> lt2(3,10);
    auto it=lt.begin();
    it++;
    lt.splice(it,lt2);//inserts the elements into the lt and removes from the lt2
    lt2.splice(lt2.begin(),lt);
    
    
    /*lt.clear();
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    auto ite=lt.begin();
    advance(ite,3);
   lt.splice(lt.begin(),lt,ite,lt.end());
   //lt.remove(4);
   //lt.remove(21);//does not print any error
   cout<<endl;
   lt.push_back(22);
   lt.push_back(11);
   lt.push_back(11);
   lt.sort();
   lt.unique();
   lt.merge(lt2);
   lt.reverse();
   //lt2.swap(lt);
    */
    list<int> lt3{1,2,3,4,5,6};
   list<int> lt4{1,2,3,4,5,6,7};
   lt3.merge(lt4);
   for(auto it : lt4)
    {
        //cout<<it<<endl;
    }
    
}