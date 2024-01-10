#include<iostream>
using namespace std;
int main()
{
    string str[] = {"2","22","222", 
                    "3","33","333", 
                    "4","44","444", 
                    "5","55","555", 
                    "6","66","666", 
                    "7","77","777","7777", 
                    "8","88","888", 
                    "9","99","999","9999"
                   }; 
    string input;
    cin>>input;
    int n=input.length(),i;
    string final="";
    for(i=0;i<n;i++)
    {
        if(input[i]==' ')
        {
            final=final+'0';
        }
        else
        {
            int loc=input[i]-65;
            final=final+str[loc];
        }
        
    }
    cout<<final;
}