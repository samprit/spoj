#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>
#include <list>
#include <climits>
#include <vector>
#include <set>

#define ll long long
#define ull unsigned long long

using namespace std;

bool f(ll int arr[], ll int N, ll int C, ll int dist){
    ll int i, lastPos = 0, cows = 1;
    if(cows == C) return true;

    for(i=1 ; i<N; i++){
        if(arr[i] - arr[lastPos] >= dist){
            lastPos = i;
            cows++;
            if(cows == C)   return true;
        }
    }
    return false;
}

ll int b_search(ll int arr[], ll int N, ll int C){
    ll int low = 0, high = arr[N-1], lastMin, mid;
    while(low<=high){
        mid = (high + low)/2;

        if(f(arr, N, C, mid)){
            low = mid + 1;
            lastMin = mid;
        }else{
            high = mid - 1;
        }
    }
    if(f(arr, N, C, low-1))  return low-1;
    return lastMin;
}

int compa(ll int a, ll int b){
	return a<b;
}

int main(){

    ll int T,N,i, C;
    scanf("%lld",&T);

    while(T--){
        scanf("%lld %lld",&N, &C);        
        ll int arr[N];
        for(i=0;i<N;i++){
            scanf("%lld",&arr[i]);
        }
        sort(arr, arr+N, compa);

        printf("%lld\n", b_search(arr,N,C));
    }
    return 0;
}