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

	float num;
	cin>>num;

	while(num!=0.00){

		float i=2;
		float sum = 0;

		while(sum<num){
			sum += 1/i;
			i++;
		}
		cout<<i-2<<" card(s)\n";
		cin>>num;
	}

	return 0;
}