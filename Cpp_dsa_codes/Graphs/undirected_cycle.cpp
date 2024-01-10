#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class detect
{
    public:
    int v;
    list<int> *adj;
    public:
    detect(int v)
    {
        this->v=v;
        adj=new list<int>[v];

    }
    void addededge(int u,int v)
    {
        adj[u].push_back(v);

    }
    bool iscyclicutil(int i,bool visited[],bool stack[])
    {
        if(visited[i]==false)
        {
            visited[i]=true;
            stack[i]=true;
            for(auto x:adj[i])
            {
                if(visited[x]==false && iscyclicutil(x,visited,stack))
                {
                    return true;
                }
                else if(stack[x]==true)
                {
                    return true;
                }
            }

        }
        stack[i]=false;
        return false;


    }
    bool cyclic()
    {
        bool visited[v];
        bool stack[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
            stack[i]=false;
        }
        for(int i=0;i<v;i++)
        {
            if(iscyclicutil(i,visited,stack))
            {
                return true;
            }


        }
        return false;
    }
    

    
};
int main()
{
    int v;
    cin>>v;
    detect obj(v);
    obj.addededge(0,1);
    obj.addededge(0,2);
    obj.addededge(1,2);
    obj.addededge(2,0);
    obj.addededge(2,3);
    obj.addededge(3,3);
    if(obj.cyclic())
    {
        cout<<"Cycle detected";

    }
    else
    {
        cout<<"Cycle not detected";
    }

}