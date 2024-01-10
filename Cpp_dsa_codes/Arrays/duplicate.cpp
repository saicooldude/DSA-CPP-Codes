#include<iostream>
using namespace std;
#include<unordered_map>
void method1(int arr[],int n)
{
    int i;
    unordered_map<int,int> unmap;
    for(i=0;i<n;i++)
    {
        unmap[arr[i]]++;

    }
    for(auto x : unmap)
    {
        if(x.second>1)
        {
            cout<<x.first<<endl;
        }
    }

}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"******************"<<endl;
    method1(arr,n);
}