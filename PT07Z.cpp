#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>
#include <list>

#define ll long long
#define ull unsigned long long

using namespace std;

// This class represents a directed graph using adjacency list representation
class Graph
{
    public:
        int V;    // No. of vertices
        list<int> *adj;    // Pointer to an array containing adjacency lists
        bool *visited;
        int *dis;

        Graph(int V);  // Constructor
        void addEdge(int v, int w); // function to add an edge to graph
        int BFS(int s);  // prints BFS traversal from a given source s
        void delEdge(int v);
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];

    // Mark all the vertices as not visited
    visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    dis = new int[V];
    dis[0] = 0;
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
    adj[w].push_back(v); 
}

void Graph::delEdge(int v)
{
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i){
        adj[*i].remove(v);
    }
    adj[v].clear();
}
 
int Graph::BFS(int s)
{
    
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 
    // 'i' will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        //cout << s << " ";
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                dis[*i]=dis[s]+1;
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    return s;
}

int main(){

    
    ll int T, N, E, i;
    ll int temp1, temp2;
    scanf("%lld",&N);

    Graph g(N);
    for(i=0;i<N-1;i++){
        scanf("%lld %lld",&temp1,&temp2);
        g.addEdge(temp1-1, temp2-1);
    }
    ll int far1 = g.BFS(0);
    g.dis[far1] = 0;
    for(i=0;i<N;i++){
    	g.visited[i]=false;
    }
    ll int far2 = g.BFS(far1);
	ll int dist = g.dis[far2];
	//printf("%lld %lld\n", far1, far2);
    printf("%d\n", dist);

    return 0;
}