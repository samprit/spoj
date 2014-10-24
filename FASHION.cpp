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
	int t;
	cin>>t;

	while(t--){
		int N,i;
		cin>>N;

		int men[N], women[N];
		for(i=0;i<N;i++){
			cin>>men[i];
		}
		for(i=0;i<N;i++){
			cin>>women[i];
		}

		sort(men, men+N);
		sort(women, women+N);

		long int max = 0;

		for(i=0;i<N;i++){
			max += men[i] * women[i];
		}

		cout<<max<<"\n";

	}
    return 0;
}