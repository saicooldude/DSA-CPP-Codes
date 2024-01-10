#include<iostream>
using namespace std;
#include<list>
class Graph
{
	int v;
	list<int> *adj;
	
public:
	Graph(int v)
	{
		this->v=v;
		adj=new list<int>[v];
		
	};

public:
	void addEdge(int v,int w)
	{
		adj[v].push_back(w);
	}
public:
	void BFS(int s)
	{
		bool visited[v];
		for(int i=0;i<v;i++)
		{
			visited[i]= false;
		}
		 list<int> queue;
		 queue.push_back(s);
		 visited[s]=true;
		 list<int>::iterator i; 

		 while(!queue.empty())
		 {
			 int s=queue.front();
			 cout<<s;
			 queue.pop_front();
			 
			 for(i=adj[s].begin();i!=adj[s].end();++i)
			 {
				 if(!visited[*i])
				 {
					 visited[*i]=true;
					 queue.push_back(*i);
				 }
			 }
		 }
	}
	

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
  
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n"; 
    g.BFS(2); 
  



}
