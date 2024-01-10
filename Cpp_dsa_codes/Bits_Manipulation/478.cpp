#include <iostream>
using namespace std;
void copysetbits(int x,int y,int l,int r)
{
    if(l<1 || l>32)
    {
        return;
    }
    for(int i=l;i<=r;i++)
    {
        int mask=(1<<i-1);
        if(y&mask)
        {
            x=x|mask;
        }
    }
    cout<<x;
    
    
}
int main() 
{
	int x,y;
	int l,r;
	cin>>x>>y>>l>>r;
	copysetbits(x,y,l,r);
	return 0;
}
