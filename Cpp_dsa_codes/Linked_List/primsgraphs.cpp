#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define V 5
int mindis(int distance[],bool sst[])
{
    int min=INT_MAX;
    int minindex;
    for(int i=0;i<V;i++)
    {
        if(!sst[i] && distance[i]<min)
        {
            min=distance[i];
            minindex=i;
        }
    }
return minindex;
}
void prims(int Graph[V][V])
{
    int parent[V];
    bool cond[V];
    int distance[V];
    for(int i=0;i<V;i++)
    {
        distance[i]=INT_MAX;
        cond[i]=false;
    }
    
    distance[0]=0;
    parent[0]=-1;
    
    int j,index;
    for(int count=0;count<V-1;count++)
    {
        
        index=mindis(distance,cond);
        
        cond[index]=true;
        
        for(j=0;j<V;j++)
        {
            if(!cond[j] && Graph[index][j] && Graph[index][j] < distance[j])
            {
                distance[j]=Graph[index][j];
                parent[j]=index;
            }
        }
    }
    for(int i=1;i<V;i++)
    {
        cout<<parent[i]<< "->" << i <<"    "<<distance[i]<<endl;

    }
}
int main()
{
    int  graph[V][V] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } };
  prims(graph);
}
