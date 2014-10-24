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

std::string to_string(int value)
{
  //create an output string stream
  std::ostringstream os ;

  //throw the value into the string stream
  os << value ;

  //convert the string stream into a string and return
  return os.str() ;
}

// This class represents a directed graph using adjacency list representation
class Graph
{
    public:
        int V;    // No. of vertices
        int *rem;

        Graph(int V);  // Constructor
        string BFS(int s);  // prints BFS traversal from a given source s
};
 
Graph::Graph(int V)
{
    this->V = V;

    rem = new int[V];
    for(int i = 0;i<V;i++){
        rem[i] = 0;
    }
}
 
 
string Graph::BFS(int s)
{
    string parVal[V];
    for(int i=0;i<V;i++)    parVal[i]="";
    int par;
    // Create a queue for BFS
    //list<int> queue;
    list<int> mod;
 
    //queue.push_back(s);
    mod.push_back(s%V);
    parVal[s%V] += to_string(s);

    if(s%V == 0){
        return  to_string(s);
    }
 
    while(!mod.empty())
    {
        // Dequeue a vertex from queue and print it
        //s = queue.front();
        par = mod.front();
        
        //queue.pop_front();
        mod.pop_front();
        
        /*for(int k =0 ;k<V;k++){
            //cout<<k<<":"<<parVal[k]<<" , ";
        }
        cout<<par<<" \n";*/
 
        if(par == 0){
            return parVal[0];
        }

        if(rem[(par*10) % V] != 1){
            //queue.push_back(0);
            mod.push_back((par*10) % V);
            parVal[(par*10) % V] = parVal[par] + to_string(0);
            rem[(par*10) % V] = 1;
            //cout<<(par*10) % V<<"  ,";
        }
        
        if(rem[(par*10 + 1) % V] != 1){
            //queue.push_back(1);
            mod.push_back((par*10 + 1) % V);
            parVal[(par*10 + 1) % V] = parVal[par] + to_string(1);
            rem[(par*10+1) % V] = 1;
            //cout<<(par*10+1) % V;
        }
        //cout<<"\n";
    }
    return "";
}

int main(){

    
    ll int T, N;
    scanf("%lld",&T);

    while(T--){
        scanf("%lld",&N);

        Graph g(N);

        cout<<g.BFS(1)<<endl;

    }
    
    return 0;
}