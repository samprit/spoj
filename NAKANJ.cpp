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

struct dual{
    ll int x,y, moves;
} ;

// This class represents a directed graph using adjacency list representation
class Graph
{
    public:
        int V;    // No. of vertices
        int *rem;

        Graph(int V);  // Constructor
        ll int BFS(struct dual s, struct dual f);
};
 
Graph::Graph(int V)
{
    this->V = V;

    rem = new int[V];
    for(int i = 0;i<V;i++){
        rem[i] = 0;
    }
}
 

ll int Graph::BFS(struct dual s, struct dual f)
{
    
    list<struct dual> mod;
    struct dual top;
 
    struct dual temp;
    s.moves = 0;
    mod.push_back(s);
    
    ll int moves = 0;
    if(s.x == f.x && s.y == f.y){
        return  moves;
    }

    int visited[8][8];

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            visited[i][j] = 0;
        }
    }
 
    int i,j;
   
    while(!(s.x == f.x && s.y == f.y))
    {
        top = mod.front();
        
        mod.pop_front();
        i = top.x;
        j = top.y;

        if(f.x == i && f.y == j){
            return top.moves;
        }
        temp.moves = top.moves+1;
        if(i+2<8 && j+1<8 && !visited[i+2][j+1]){
            visited[i+2][j+1] = 1;
            temp.x = i+2;   temp.y = j+1;
            mod.push_back(temp);
        }
        if(i+2<8 && j-1>=0 && !visited[i+2][j-1]){
            visited[i+2][j-1] = 1;
            temp.x = i+2;   temp.y = j-1;
            mod.push_back(temp);
        }
        if(i-2>=0 && j+1<8 && !visited[i-2][j+1]){
            visited[i-2][j+1] = 1;
            temp.x = i-2;   temp.y = j+1;
            mod.push_back(temp);
        }
        if(i-2>=0 && j-1>=0 && !visited[i-2][j-1]){
            visited[i-2][j-1] = 1;
            temp.x = i-2;   temp.y = j-1;
            mod.push_back(temp);
        }

        if(j+2<8 && i+1<8 && !visited[i+1][j+2]){
            visited[i+1][j+2] = 1;
            temp.x = i+1;   temp.y = j+2;
            mod.push_back(temp);
        }
        if(j+2<8 && i-1>=0 && !visited[i-1][j+2]){
            visited[i-1][j+2] = 1;
            temp.x = i-1;   temp.y = j+2;
            mod.push_back(temp);
        }
        if(j-2>=0 && i+1<8 && !visited[i+1][j-2]){
            visited[i+1][j-2] = 1;
            temp.x = i+1;   temp.y = j-2;
            mod.push_back(temp);
        }
        if(j-2>=0 && i-1>=0 && !visited[i-1][j-2]){
            visited[i-1][j-2] = 1;
            temp.x = i-1;   temp.y = j-2;
            mod.push_back(temp);
        }
 
    }
    return moves;
}

int main(){

    
    ll int T;
    scanf("%lld",&T);

    while(T--){
        struct dual sPos, fPos;
        string from, to;
        cin>>from>>to;

        Graph g(8);

        sPos.x = 8 - (from[1]-'0');
        fPos.x = 8 - (to[1]-'0');

        sPos.y = (from[0]-'a');
        fPos.y = (to[0]-'a');
        
        //cout<<sPos.x<<" "<<sPos.y<<"\n";
        //cout<<fPos.x<<" "<<fPos.y<<"\n";
        
        cout<<g.BFS(sPos, fPos)<<"\n";
    }
    
    return 0;
}