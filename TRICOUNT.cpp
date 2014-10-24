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

int main(){

	ll int T;
	cin>>T;

	while(T--){
		ll int n;
		cin>>n;

		cout<< ( n*(2*n+1)*(n+2)   )/8<<endl;
	}

	return 0;
}