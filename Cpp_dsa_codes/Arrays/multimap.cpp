#include<iostream>
using namespace std;
#include<map>
int main()
{
    multimap<char,int> mtp{{'c',5},{'d',6},{'e',7}};
    mtp.insert(make_pair('b',3));
    mtp.insert(make_pair('b',5));
    mtp.insert(pair<char,int>('b',4));
    
    /*multimap<char,int>::key_compare mycomp = mtp.key_comp();
    char c = mtp.rbegin()->first;
 
    cout<<mycomp(mtp.end()->first,mtp.begin()->first);    
    */
    //mtp.erase(mtp.find('b'),mtp.find('c'));
    for(auto x : mtp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    /*auto it=mtp.find('b');
    mtp.erase(it,mtp.upper_bound('c'));
    auto x=mtp.begin();
    for(x;x!=mtp.end();x++)
    {
        cout<<(*x).first<<" "<<(*x).second<<endl;
    }*/
    //cout<<mtp.count('b');
    /*auto x=mtp.lower_bound('b');
    auto m=mtp.upper_bound('b');
    auto f=mtp.equal_range('b');
    auto h=mtp.find('b');
    //cout<<h->first;
    for(auto ite=f.first;ite!=f.second;ite++)
    {
        cout<<ite->second;
    } 
    return 0;
*/
}