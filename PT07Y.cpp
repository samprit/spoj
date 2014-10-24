#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>

#define ll long long
#define ull unsigned long long

using namespace std;

struct Edge{
	int src, dest;
};

struct subset
{
    int parent;
    int rank;
};
  
// A utility function to find set of an element i
// (uses path compression technique)
int find(struct subset subsets[], int i)
{
    // find root and make root as parent of i (path compression)
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
 
// A function that does union of two sets of x and y
// (uses union by rank)
void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
 
    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    // If ranks are same, then make one as root and increment
    // its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
 
// The main function to check whether a given graph contains cycle or not
bool isCycle( int V, int E,  struct Edge edge[])
{
    // Allocate memory for creating V sets
    struct subset subsets[V];
 
    for (int v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
    // Iterate through all edges of graph, find sets of both
    // vertices of every edge, if sets are same, then there is
    // cycle in graph.
    for(int e = 0; e < E; ++e)
    {
        int x = find(subsets, edge[e].src);
        int y = find(subsets, edge[e].dest);
 
        if (x == y)
            return true;
 
        Union(subsets, x, y);
    }
    return false;
}

int main()
{
	int i;
	int V, E;
	cin>>V>>E;

	struct Edge edge[E];
	for(i=0;i<E;i++){
		cin>>edge[i].src>>edge[i].dest;
		edge[i].src--;
		edge[i].dest--;
	}

	if(V!=E+1){
		cout<<"NO\n";
		return 0;
	}
	if(isCycle(V,E,edge)){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}

    return 0;
}