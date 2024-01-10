#include<iostream>
using namespace std;
#include<string.h>
int main()
{
       int fs;
        cin>>fs;
        int damage=0,strength=1;
        char ch[100];
        cin>>ch;
        int n=strlen(ch);
        for(int i=0;i<n;i++)
        {
            if(ch[i]=='S')
            {
                damage=damage+strength;
                
            }
            else if(ch[i]=='C')
            {
                strength=strength*2;
            }
        }
        
            
        cout<<damage;
    

return 0;

}