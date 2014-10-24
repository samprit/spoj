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

bool findChange(ll int N, ll int arr[], ll int K){

    if(N==0){
        return true;
    }else if(N<0){
        return false;
    }

    if(K<=0){
        return false;
    }

    ll int sum = 0;

    for(ll int i=0;i<K;i++){
        sum += arr[i];
    }

    return (findChange(N,arr,K-1) || findChange(N-sum,arr,K));

}

bool findChangeBetter(ll int N, ll int arr[], ll int K){
    ll int  sum[K+1], i,j;
    bool coins[1000001] = {false};
    sum[0] = arr[0];

    for(i=1;i<K;i++){
        sum[i] = sum[i-1] + arr[i];
    }

    coins[0] = true;
    for(i=0;i<=N;i++){
        if(coins[i])
            coins[i+arr[0]] = true;
    }

    for(i=1;i<K;i++){
        for(j=0;j<=N;j++){
            if(coins[j]){
                if(j+sum[i]>N) break;
                coins[j+sum[i]] = true;
            }
        }
    }

    return coins[N];
}

int main(){

    ll int N, K;

    scanf("%lld %lld",&N, &K);

    ll int change[K+1];

    for(ll int i=0;i<K;i++){
        scanf("%lld",&change[i]);
    }

    if(findChangeBetter(N,change,K)){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

	return 0;
}