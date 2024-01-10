#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<int,int> mp;
    mp[2]=2;
    mp[3]=3;
    mp[4]=4;
    //map<int,int>mp1(mp.begin(),mp.end());
    //map<int,int>mp1(mp);
    /*for(auto x : mp1)
    {
        cout<<x.first<<x.second<<endl;
    }*/
    
    map<int,int> mymap={{6,7},{8,9},{9,10},{10,11}};
    map<int,int>::iterator it = mp.begin();
    mp[2]=44;
    mp[55]=33;
    mp.insert(make_pair(1,2));
    mp.insert(pair<int,int>(22,33));
    mp.insert(make_pair(44,62));
    mp.insert(make_pair(100,222));
    mp.erase(3);
    map<int,int>::iterator ite,lt,ut,et;
    
    
    //mp.erase(ite,mp.end());
    /*ite=mp.find(22);
  if(ite!=mp.end())
  {
     mp.erase(ite);
    
  }
  else
  {
    cout<<"NOT SUCCESSFULL";
  }
*/
  lt=mp.lower_bound(4);
  ut=mp.upper_bound(44);
  et=mp.equal_range(4);
  cout<<et.first->first;
  mp.erase(lt,ut);
    /*for(it;it!=mp.end();it++)
    {
        if(it->first==4)
        {
            it->second=66;
        }
        cout<<it->first<<" "<<it->second<<endl;
    }/*
   //cout<<mp[2];
   /*if(mp.find(44)!=mp.end())
   {
       cout<<"searchfound";
   }
   else
   {
       cout<<"searchnotfound";
   }
cout<<mp.count(55);
*/

}