#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5> arr={1,2,3,4,5};
    arr.fill(5);
    for(auto it=arr.begin();it!=arr.end();it++)
    {
         cout<<*it;
    }
    cout<<endl<<"**********************************"<<endl;
    
    cout<<arr.size()<<arr.max_size();
    cout<<endl;
    int arr1[5]={1,2,3,4,5};
    for(int &x : arr1)
    {
        cout<<x;
    }
    arr1.swap(arr);
    
    return 0;
    
}