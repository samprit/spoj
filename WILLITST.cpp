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

	ull int N;
	cin>>N;

	if((N&(N-1)) == 0){
		cout<<"TAK\n";
	}else{
		cout<<"NIE\n";
	}

	return 0;
}