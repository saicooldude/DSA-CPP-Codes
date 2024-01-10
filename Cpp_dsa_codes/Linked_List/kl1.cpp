#include<iostream>
using namespace std;
struct student
{
   string name;
   string course;
   float data; 

};
int main()
{
    int n,i;
    cin>>n;
    
    student s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i].name;
        cin>>s[i].course;
        cin>>s[i].data;
        

    }
        for(i=0;i<n;i++)
    {
        if(s[i].data>=9.0 )
        {
            cout<<s[i].name<<endl;
            cout<<s[i].course<<endl;
            if(s[i].data==9.0)
            {
            cout<<"9.0"<<endl;

            }
            else
            {
                cout<<s[i].data<<endl;
            }
            
        }

    }
    return 0;
}