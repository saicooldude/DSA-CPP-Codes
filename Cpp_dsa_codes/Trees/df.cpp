#include<iostream>
using namespace std;
#include<vector>
void add(int arr[],bool val[],vector<int> vt)
{
    arr[0]=1;
    val[0]=true;
    vt.push_back(1);

}
int main()
{
    int arr[5]={0};
    bool val[5]={false};
    vector<int> vt={0};


    cout<<arr[0]<<val[0]<<endl;
    add(arr,val,vt);
    cout<<arr[0]<<val[0];
    return 0;

}