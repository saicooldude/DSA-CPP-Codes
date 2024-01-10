#include <iostream>
using namespace std;
int palindrome(string s)
{
    int lb=0;
    int ub=s.length()-1;
    while(lb<=ub)
    {
        if(s[lb]!=s[ub])
        {
            return false;
        }
        lb++;
        ub--;
        
    }
    return true;
}
int main() 
{
	string s;
	cin>>s;
	int count=0,flag=0;
	while(s.length()>0)
	{
	    if(palindrome(s))
	    {
	        flag=1;
	        break;
	        
	    }
	    else
	    {
	        count++;
	        s.erase(s.begin()+s.length()-1);
	        
	    }
	}
	if(flag)
	{
	    cout<<count;
	}
	return 0;
}
