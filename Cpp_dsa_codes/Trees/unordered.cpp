#include<iostream>
using namespace std;
#include<unordered_set>
int main()
{
    unordered_multiset<char> sts;
    sts.insert('a');
    sts.insert('b');
    sts.insert('c');
    sts.insert('d');
    sts.insert('e');
    sts.insert('f');
    sts.insert('g');
    sts.insert('h');
    sts.insert('i');
    sts.insert('j');
    sts.insert('k');
    sts.insert('l');
    sts.insert('m');
    sts.insert('a');
    int n=sts.bucket_count();
    for(int i=0;i<n;i++)
    {
        cout<<"Bucket size of "<<i<<" is "<<sts.bucket_size(i)<<"and elements of the buckets are ";
        for(auto it=sts.begin(i);it!=sts.end(i);it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    

    



}