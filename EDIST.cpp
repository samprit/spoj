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
using namespace std;
 
//M lazy ;)
#define ll long long
typedef istringstream iss;
typedef ostringstream oss;

#define ESP (1e-9)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
 
void assertOO(int a, int n, int b) {
    assert( a <= n && n <= b );
}


int editDistance(string a, string b){
    int i,j,temp, lastDiag, oldDiag;
    int dist[b.size()+1];

    for(i=0;i<=b.size();i++){
        dist[i]= i;
    }

    for(i=1;i<=a.size();i++){
        dist[0]=i;
        lastDiag = i-1;
        for(j=1;j<=b.size();j++){
            temp=1;
            if(a[i-1]==b[j-1])  temp=0;
            
            oldDiag = dist[j];
            dist[j] = min(lastDiag+temp, min(dist[j-1]+1, dist[j]+1));
            lastDiag = oldDiag;
        }
    }

    return dist[b.size()];
}

int main(){

    ll int T;
    cin>>T;

    while(T--){
        string a, b;
        cin>>a>>b;
        cout<<editDistance(a,b)<<"\n";
    }
    
	return 0;
}