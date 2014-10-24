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
	int N,i;
	cin>>N;

	while(N!=-1){
		int candy[N];
		long int sum = 0;
		long int ans = 0;

		for(i=0;i<N;i++){
			cin>>candy[i];
			sum += candy[i];
		}
		int avg = sum/N;

		if(avg*N != sum){
			cout<<"-1\n";
		}else{
			for (i = 0; i < N; ++i){
				if(candy[i]>avg){
					ans += candy[i] - avg;
				}
			}
			cout<<ans<<"\n";
		}

		cin>>N;
	}


    return 0;
}