#include <iostream>
using namespace std;

int main() 
{
	int x,count=0;
	cin>>x;
	while(x>0)
	{
	    x=x&x-1;
	    count++;
	 }
	 cout<<count;
	return 0;
}
