#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Graph
{
    public :
    int v;
    list<int> *adj;
    Graph(int v)
    {
        this->v=v;
        adj=new list<int>[v];
    }
    void addedge(int u,int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cyclicutil(int u,bool visited[],int parent)
    {
       visited[u]=true;
       for(auto x:adj[u])
       {
           if(visited[x]==false)
            {
               if(cyclicutil(x,visited,u))
               {
                   return true;
               }

            }
            else if(x!=parent)
            {
                return true;

            }
            

        }
        return false;

    }
    bool iscyclic()
    {
        bool visited[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        for(int i=0;i<v;i++)
        {
            if(!visited[i])
            {
                if(cyclicutil(i,visited,-1))
                {
                    return true;
                }
            }
        }
        return false;


    }

};
int main()
{
    int v=3;
    Graph obj(v);
    obj.addedge(0,1);
    obj.addedge(1,2);
    /*obj.addedge(2,1);
    obj.addedge(0,3);
    obj.addedge(3,4);*/
    if(obj.iscyclic())
    {
        cout<<"IT is a cyclic graph";
    }
    else
    {
        cout<<"Not a cyclic graph";
    }
    
}