//Includes
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <cstring>
#include <limits>
#include <list>
#include <string>
#include <climits>
using namespace std;
 
//M lazy ;)
#define ll long long
typedef vector <int> vi;
typedef pair< int ,int > pii;
typedef istringstream iss;
typedef ostringstream oss;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i--)
#define all(a) a.begin(),a.end()
#define ESP (1e-9)
 
#define gi(n) scanf("%d",&n)
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")
#define dg(n,s); printf("%s %d",s,n)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
 
void assertOO(int a, int n, int b) {
    assert( a <= n && n <= b );
}
  
/*
Set MAX according to the number of nodes in the graph. Remember,
nodes are numbered from 1 to N. Set INF according to what is the
maximum possible shortest path length going to be in the graph.
This value should match with the default values for d[] array.
*/
const int MAX = 10001;
const int INF = INT_MAX;
 
/*
pair object for graph is assumed to be (node, weight). d[] array
holds the shortest path from the source. It contains INF if not
reachable from the source.
*/
vector< pii > G[MAX];
int d[MAX];
 
/*
The dijkstra routine. You can send a target node too along with
the start node.
*/
void dijkstra(int start) {
    int u, v, i, c, w;
 
    /*
    Instead of a custom comparator struct or class, we can use
    the default comparator class greater<T> defined in quque.h
    */
    priority_queue< pii, vector< pii >, greater< pii > > Q;
 
    /*
    Reset the distance array and set INF as initial value. The
    source node will have weight 0. We push (0, start) in the
    priority queue as well that denotes start node has 0 weight.
    */
    //memset(d, 0x3f, sizeof d);
    Q.push(pii(0, start));
    d[start] = 0;
 
    /*
    As long as queue is not empty, check each adjacent node of u
    */
    while(!Q.empty()) {
        u = Q.top().second; // node
        c = Q.top().first; // node cost so far
        Q.pop(); // remove the top item.
 
        /*
        We have discarded the visit array as we do not need it.
        If d[u] has already a better value than the currently
        popped node from queue, discard the operation on this node.
        */
        if(d[u] < c) continue;
 
        /*
        In case you have a target node, check if u == target node.
        If yes you can early return d[u] at this point.
        */
 
        /*
        Traverse the adjacent nodes of u. Remember, for the graph,,
        the pair is assumed to be (node, weight). Can be done as
        you like of course.
        */
        for(i = 0; i < G[u].size(); i++) {
            v = G[u][i].first; // node
            w = G[u][i].second; // edge weight
 
            /*
            Relax only if it improves the already computed shortest
            path weight.
            */
            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                Q.push(pii(d[v], v));
            }
        }
    }
}
 
int main() {

    int T, N,E,i,j;
    scanf("%d",&T);

    assertOO(0,T,10001);
    while(T--){
        scanf("%d",&N);

        for(i=0;i<N;i++) G[i].clear();

        map<string, int> city;
        char temp[20];
        int edges, to, cost;
        for(i=0;i<N;i++){

            scanf("%s",temp);
            city[string(temp)] = i;

            scanf("%d",&edges);

            for(j=0;j<edges;j++){
                scanf("%d %d",&to, &cost);
                G[i].push_back(pii(to-1, cost));
            }
        }
        int pathsToFind;
        scanf("%d",&pathsToFind);

        for(j=0;j<pathsToFind;j++){
            for(i=0;i<N;i++) d[i] = INT_MAX;

            char fr[20], toCity[20];
            scanf("%s %s",fr, toCity);
            dijkstra(city[string(fr)]);
            int endCity = city[string(toCity)];
            printf("%d\n", d[endCity]);
        }
    }
    return 0;
}