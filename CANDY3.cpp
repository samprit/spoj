#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

int main()
{
	int t,N,i;
	cin>>t;

	while(t--){
		cin>>N;
		ll int sum = 0;
		ll int temp;
		for(i=0;i<N;i++){
			
			cin>>temp;
			sum = (sum + temp)%N;
		}

		if( sum%N == 0 ){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}


    return 0;
}