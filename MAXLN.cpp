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

int main(int argc, char const *argv[]){
	
	ll int T,N, ans;
	scanf("%lld",&T);
	ll int caseNo=0;
	while(T--){
		caseNo++;
		scanf("%lld",&N);
		printf("Case %lld: %.2f\n",caseNo, 0.25 + 4*N*N);
	}

	return 0;
}