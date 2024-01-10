#include<iostream>
using namespace std;
#include<vector>
#include<list>
class Graph
{
    public:
    int v;
    list<int> *adj;
    public:
    Graph(int v)
    {
        this->v=v;
        adj=new list<int> [v];

    }
    void addedge(int u,int v)
    {
        adj[u].push_back(v);

    }
    void BFS(int s)
    {
        list<int>queue;
        bool visited[v];
        for(int i=0;i<v;i++)
        {
            visited[i]=false;
        }
        visited[s]=true;
        queue.push_back(s);
        while(!queue.empty())
        {
            int ele=queue.front();
            cout<<ele<<" ";
            queue.pop_front();
            
            for(auto x:adj[ele])
            {
                if(visited[x]==false)
                {
                    visited[x]=true;
                    queue.push_back(x);

                }
            }
            
        }

        
    }



};
int main()
{
    Graph g(5);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(2,0);
    g.addedge(2,3);
    g.addedge(3,3);
    
    g.BFS(2);

}
