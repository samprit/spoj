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

int main(){

	ll int T;
	cin>>T;

	map<string, int> variation;

	while(T--){
		ll int N;
		cin>>N;
		 string toss;
		 cin>>toss;

		 variation.clear();

		 variation["TTT"] = 0;
		 variation["TTH"] = 0;
		 variation["THT"] = 0;
		 variation["THH"] = 0;
		 variation["HTT"] = 0;
		 variation["HTH"] = 0;
		 variation["HHT"] = 0;
		 variation["HHH"] = 0;

		 string subs;
		 for(int i=0;i<toss.size()-2;i++){
		 	subs = toss.substr(i,3);
		 	variation[subs]++;
		 }

		 cout<<N<<" ";
		 cout<<variation["TTT"]<<" ";
		 cout<<variation["TTH"]<<" ";
		 cout<<variation["THT"]<<" ";
		 cout<<variation["THH"]<<" ";
		 cout<<variation["HTT"]<<" ";
		 cout<<variation["HTH"]<<" ";
		 cout<<variation["HHT"]<<" ";
		 cout<<variation["HHH"]<<"\n";

	}

	return 0;
}