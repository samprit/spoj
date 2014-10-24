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

short dp[2][5002] = {0};

short lcs(string a){

    string b = a;
    reverse(b.begin(), b.end());

    for(short i=1;i<=a.size();i++){
        for(short j=1;j<=b.size();j++){
            if(a[i-1] == b[j-1]){
                dp[1][j] = dp[0][j-1]+1;
                //dp[i][j] = dp[i-1][j-1]+1;
            }else{  
                dp[1][j] = max(dp[0][j], dp[1][j-1]) ;
                //dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
            }
        }
        for(short j=0;j<=b.size();j++){
            dp[0][j] = dp[1][j];
        }

    }

    return (a.size() - dp[1][b.size()]);

}

int main(){


    ll int N;
    scanf("%lld",&N);
    char str[6200];
    scanf("%s",str);
    printf("%d\n", lcs(string(str)));
    



	return 0;
}