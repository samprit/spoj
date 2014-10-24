#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

int power(int a, ll int b){
    if(b==0) return 1;
    int ret = power(a,b/2);
    ret *= ret;
    if(b&1) ret *= a;
    return ret%10;
}

int main()
{
	int t;
	cin>>t;

	while(t--){
		int a;
		ll int b;
		cin>>a>>b;
		cout<<power(a%10,b)<<"\n";
	}

    return 0;
}