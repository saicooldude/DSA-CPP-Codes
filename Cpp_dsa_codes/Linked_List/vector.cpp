#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 

    vector<int> vec;
    vec.push_back(50);
    vec.push_back(22);
    vec.push_back(22);
    vec.push_back(22);
    vec.push_back(223);
    vec.push_back(22);
    vec.push_back(22);
    vec.push_back(27);
    vec.push_back(225);
    vector<int>::iterator it;
    vector<int> vo;
    vo.push_back(22);
    vo.push_back(22);
    vo.push_back(223);
    vo.swap(vec);

    
    
    
    vec.insert(vec.begin()+6,10,5000);
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
} 