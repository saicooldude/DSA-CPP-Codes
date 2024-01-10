#include<iostream>
using namespace std;
#include<unordered_map>
int main()
{
    unordered_multimap<int,int> fg;
    fg.insert(pair<int,int>(1,2));
    fg.insert(pair<int,int>(1,3));
    fg.insert(pair<int,int>(2,5));
    fg.insert(pair<int,int>(2,6));
    fg.insert(pair<int,int>(3,34));
    fg.insert(pair<int,int>(4,234));
    fg.insert(pair<int,int>(5,234543));
    fg.insert(pair<int,int>(7,20));
    fg.insert(pair<int,int>(7,2000));
    auto x=fg.equal_range(1);
   for(auto it=x.first;it!=x.second;it++ )
   {
       cout<<it->first<<" "<<it->second;   
       
    }
    int n=fg.bucket_count();
    for(int i=0;i<n;i++)
    {  
        cout<<"Bucket size is "<<fg.bucket_size(i)<<"  Bucket "<<i<<" elements are "<<endl;
        for(auto it=fg.begin(i);it!=fg.end(i);it++)
        {
            cout<<it->first<<" "<<it->second<<ends ;
        }
        cout<<endl;
    }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   /* unordered_multimap<int,int> kk;
    kk.insert(pair<int,int>(1,2));
    kk[2]=3;
    kk[3]=4;
    kk[4]=5;
    kk[5]=6;
    kk[6]=7;
    kk[7]=8;
    kk.rehash(20);
    kk.reserve(7);
    int n=kk.bucket_count();
    int k=kk.max_bucket_count();
    cout<<"bucket_count"<<n<<" maximum bucket count"<<k<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Bucket size is"<<kk.bucket_size(i)<<"  Bucket "<<i<<" ";
        for(auto it=kk.begin(i);it!=kk.end(i);it++)
        {
            cout<<it->first<<","<<it->second<<"    ";
        }
        cout<<endl;
    }

    cout<<endl<<"********************************************************"<<endl;
    for(auto x:kk)
    {
        cout<<x.first<<""<<x.second<<"is in "<<kk.bucket(x.first)<<endl;
    }
    cout<<"*******************"<<endl;
    cout<<kk.load_factor()<<endl<<kk.max_load_factor();

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*cout<<(kk.empty() ? "is empty()" : "not empty()");
    //cout<<kk.max_size()<<" "<<kk.max_bucket_count() ;
    auto it=kk.end();
    //cout<<it->second<<endl;
    cout<<kk[6];

    /*for(auto it : kk)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }*/
    /*if(kk.find(2)!=kk.end())
    {
        cout<<"match found";
    }
    else
    {
        cout<<"math not found";
    }
    for(auto& x:{1,2,3,4,5})
    {
        if(kk.count(x)>0)
        {
            cout<<"found";
        }
        else
        {
            cout<<"not found";
        }



    }*/
    


}





























































































/*



#include<iostream>
using namespace std;
#include<map>
int main()
{
    multimap<char,int>mmp;
    mmp.insert(pair<char,int>('a',1));
    mmp.insert(pair<char,int>('b',2));
    mmp.insert(pair<char,int>('b',3));
    mmp.insert(pair<char,int>('d',6));
    mmp.insert(pair<char,int>('c',4));
    mmp.insert(pair<char,int>('c',5));
    mmp.insert(pair<char,int>('a',40));
    mmp.insert(pair<char,int>('d',50));
    /*cout<<mmp.at('a');
    mmp.erase('a');
    auto yy=mmp.find('b');
    cout<<yy->first;
    
    auto it=mmp.lower_bound('a');
    auto kt=mmp.upper_bound('b');
    cout<<kt->first<<kt->second;
    //mmp.erase(it,kt);
    for(auto& it:mmp)
    {
        cout<<it.first<<it.second<<endl;
    }
    /*for(auto it:mmp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    for(char c='a';c<='d';c++)
    {
        auto it=mmp.equal_range(c);
        cout<<c<<"-->"<<" ";
        for(auto x=it.first;x!=it.second;x++)
        {
            cout<<x->second<<" ";
        }
        cout<<endl;
    }
    auto it=mmp.find('a');
    multimap<char,int>mm;
    mm.insert(pair<char,int>('a',10));
    mm.insert(pair<char,int>('b',20));
    mm.insert(pair<char,int>('b',30));
    mm.insert(pair<char,int>('d',60));
    mm.insert(pair<char,int>('c',40));
    mm.insert(pair<char,int>('c',50));
    mm.insert(pair<char,int>('a',400));
    mm.insert(pair<char,int>('d',500));
    mmp.insert(mm.begin(),mm.find('b'));
    int c=0;
    for(auto x:mmp)
    {
        c++;
        cout<<x.first<<" "<<x.second<<endl;
    }
   
 cout<<endl<<c;
    

}
 

*/



























































/*#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> vec(2,7);
    vec.push_back(33);
    vector<int> ::iterator it=vec.begin();
    //vec.resize(3);
    /*for(it;it!=vec.end();it++)
    {
        cout<<*it;
    }
    cout<<"****************************"<<endl;
    //cout<<vec.size()<<endl<<vec.max_size()<<endl<<vec.capacity();
    vec[0]=11;
    for(auto x: vec)
    {
        cout<<x;
    }
    
    vec.insert(it,3,55);
    vec.push_back();
    //cout<<*it<<endl;
    
    //vec.erase(vec.begin(),vec.begin()+3);

    //cout<<vec.empty()<<endl;
    vec.reverse();
    for(auto c:vec)
    {
        cout<<c;
    }
    



}*/
































