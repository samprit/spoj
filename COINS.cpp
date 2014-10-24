#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>

#define ll long long

using namespace std;

map<ll int, ll int> maxVal;

ll int coinChange(ll int coin){

	if(maxVal.find(coin) != maxVal.end()){
		return maxVal[coin];
	}

	maxVal[coin] = max(coin, coinChange(coin/2)+coinChange(coin/3)+coinChange(coin/4));

	return maxVal[coin];
}

int main()
{
	ll int N;

	maxVal[0] = 0;
	maxVal[1] = 1;
	maxVal[2] = 2;
	maxVal[3] = 3;
	maxVal[4] = 4;

	while(cin>>N){
		cout<<coinChange(N)<<"\n";
	}
    return 0;
}