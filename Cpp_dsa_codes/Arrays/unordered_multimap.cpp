#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    unordered_multimap<int,int> ump;
    ump.insert(make_pair(1,2));
    ump.insert(make_pair(2,3));
    ump.insert(make_pair(3,4));
    ump.insert(make_pair(4,5));
    ump.insert(make_pair(5,6));
    ump.insert(make_pair(5,2));
    ump.insert(make_pair(5,3));
    ump.insert(make_pair(6,7));
    ump.insert(make_pair(7,8));
    ump.rehash(100);
    for(auto x :ump)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    /*auto g=ump.equal_range(5);
    for(auto ite=g.first;ite!=g.second;ite++)
    {
        cout<<ite->first<<" "<<ite->second<<endl;
    } */
    //cout<<"AFTER ERASING THE ELEMENT"<<endl;
    //ump.erase(ump.find(6),ump.find(3));
  for(auto x :ump)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    int n=ump.bucket_count();
    for(int i=0;i<n;i++)
    {
        cout<<"BUCKET "<<" "<<i<<endl;
        for(auto x=ump.begin(i);x!=ump.end(i);x++)
        {
            cout<<x->first<<" "<<x->second<<endl;
        }
     cout<<endl;

    }
    for(int i=0;i<n;i++)
    {
        cout<<"Bucket size for "<<i<<" "<<ump.bucket_size(i)<<endl;

    }
    auto ite=ump.begin();
    cout<<ump.bucket(99)<<endl<<ump.load_factor()<<endl<<ump.bucket_count();
   
    return 0;
}