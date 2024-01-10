#include<iostream>
using namespace std;
#include<vector>
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);

}
void printgraph(vector<int> adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<"The edges associated with vertex "<<i<<"are ";
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int v=5;
    vector<int> adj[v];
    addedge(adj,0,1);
    addedge(adj,0,4);
    addedge(adj,1,2);
    addedge(adj,1,3);
    addedge(adj,1,4);
    addedge(adj,2,3);
    addedge(adj,3,4);
    printgraph(adj,v);

}