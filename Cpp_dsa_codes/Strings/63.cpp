#include<iostream>
using namespace std;
int palindromecheck(int i,int j,string name)
{
    
    int start=i,end=j;
    while(start<end)
    {
        if(name[start]!=name[end])
        {
            return 0;
        }
        start++;
        end--;


    }
    
    return 1;


}
void palindrome(string name)
{
    int n=name.length();
    int i,j,startpos=0,max_length=1,endpos=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(palindromecheck(i,j,name))
            {
                if(j-i+1>max_length)
                {
                    startpos=i;
                    endpos=j;
                    max_length=j-i+1;

                }
                
                
            }
        }
    }
    for(int k=startpos;k<=endpos;k++)
    {
        cout<<name[k];
    }
   
}
int main()
{
    string name;
    cin>>name;
    palindrome(name);
}