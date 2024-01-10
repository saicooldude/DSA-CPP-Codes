#include<iostream>
using namespace std;
#include<list>
#include<queue>
class Graph
{
  public:
  int v;
  list<int> *adj; 
  public:
  Graph(int V)
  {
      this->v=V;
      adj=new list<int>[V];
  }
  
  void addEdge(int v,int w)
{
    adj[v].push_back(w);

}
void print(int s)
{
bool visited[v];
int i;
for(i=0;i<v;i++)
{
    visited[i]=false;
}
list<int>queue;

visited[s]=true;
queue.push_back(s);
list<int>::iterator it;
while(!queue.empty())
{
    s=queue.front();
    cout<<s;
    queue.pop_front();
    
    for(it=adj[s].begin();it!=adj[s].end();it++)
    {
        if(!visited[*it])
        {
            visited[*it]=true;
            queue.push_back(*it);
        }
    }
} }


};
int main()
{


Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
    g.print(2);
return 0;


}