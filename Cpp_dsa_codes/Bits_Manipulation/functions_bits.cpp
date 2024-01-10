#include <iostream>
using namespace std;
#include<stdio.h>
int main() 
{
    
	cout<<__builtin_parity(16)<<endl;
	cout<<__builtin_popcount(16)<<endl;
	cout<<__builtin_ctz(16)<<endl;
	cout<<__builtin_clz(16)<<endl;
	
	return 0;
}
