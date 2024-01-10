#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    unordered_map<int,int> ump;
    ump.insert(make_pair(1,2));
    ump.insert(make_pair(2,3));
    ump.insert(make_pair(3,4));
    ump.insert(make_pair(4,5));
    ump.insert(make_pair(5,6));
    ump.insert(make_pair(6,7));
    ump.insert(make_pair(7,8));
    ump.insert(make_pair(8,9));
    ump.insert(make_pair(9,10));
    ump[9]=113;
    ump[9]=220;
    ump[9]=11;
    ump.insert(make_pair(9,220));
    

    //ump.erase(9);
    unordered_map<int,int>::iterator it=ump.begin();
   /*for(it;it!=ump.end();it++)
   {
       if(it->first==8)
       {
           it->second=11;
       }
       
       cout<<it->first<<" "<<it->second<<endl;
   }*/
  unsigned n=ump.bucket_count();
  
  for (unsigned i=0; i<n; ++i) {
    cout << "bucket #" << i << " contains: ";
    for (auto it = ump.begin(i); it!=ump.end(i); ++it)
      cout << "[" << it->first << ":" << it->second << "] ";
    cout << "\n";
  }
  
cout<<ump.max_size()<<endl;
cout<<ump.max_bucket_count()<<endl;
cout<<ump.max_load_factor()<<endl;
/*unsigned nbuckets = ump.bucket_count();
for (int  i=0; i<nbuckets; ++i) {
    std::cout << "bucket #" << i << " has " << ump.bucket_size(i) << " elements.\n";
  }*/
  /*for(int i=0;i<n;i++)
  {
      cout<<"BUCKET"<<i<<"CONTAINS "<<ump.bucket_size(i)<<endl;
  }*/
  ///BUCKET NUMBER FOR EACH ELEMENT
 for(it=ump.begin();it!=ump.end();it++)
 {
     cout<<it->first<<" "<<it->second<<" "<<ump.bucket(it->first)<<endl;
 }
cout<<ump.load_factor()<<endl<<ump.max_load_factor()<<endl<<ump.bucket_count();
 return 0; 
}