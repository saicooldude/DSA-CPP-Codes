#include <iostream> 
#include <vector> 
using namespace std; 
  
int main() 
{ 

    vector<int> vt;
    vt.push_back(50);
    for(int i=0;i<5;i++)
    {
        int j;
        cin>>j;
        vt.push_back(j);
    }
    for(int i=0;i<5;i++)
    {
        cout<<vt[i];
    }
    vt.pop_back();
    cout<<vt.size();

    return 0;
} 