#include<iostream>
using namespace std;
#include<list>
class DFS
{
    public:
    int v;
    list<int> *adj;
    public:
    DFS(int w)
    {
        this->v=w;
        adj=new list<int>[v];

    } 
    void addedge(int u,int v)
    {
        adj[u].push_back(v);
    }
    void dfsnode(int ver,bool visited[])
    {
        visited[ver]=true;
        cout<<ver;
        for(auto x:adj[ver])
        {
            if(visited[x]==false)
            {
                dfsnode(x,visited);
            }
        }


    }
    void dfs()
    {
        bool visited[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        dfsnode(2,visited);


    }
    




};
int main()
{
    DFS obj(4);
    obj.addedge(0,1);
    obj.addedge(0,2);
    obj.addedge(1,2);
    obj.addedge(2,0);
    obj.addedge(2,3);
    obj.addedge(3,3);
    obj.dfs();

}
