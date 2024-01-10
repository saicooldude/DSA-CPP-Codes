#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define V 9
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
void dijstra(int Graph[V][V])
{
    int distance[V];
    bool sst[V];
    for(int i=0;i<V;i++)
    {
        distance[i]=INT_MAX;
        sst[i]=false;
    }
    distance[0]=0;
    int index=0,j;
    for(int count=0;count<V-1;count++)
    {
        index=mindis(distance,sst);
        sst[index]=true;
        for(j=0;j<V;j++)
        {
            if(!sst[j] && Graph[index][j] && distance[index]+Graph[index][j] < distance[j] )
            {   
                distance[j]=distance[index]+Graph[index][j];
            }
        }
    }
 for(int h=0;h<V;h++)
 {
     cout<< h<<" "<<distance[h]<<endl;

 }   
}
int main()
{
    int  graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
   
  dijstra(graph);
}
