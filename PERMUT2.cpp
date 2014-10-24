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

int main()
{
	ll int N,i;
	cin>>N;

	while(N){
		ll int arr[N];

		for(i=0;i<N;i++){
			cin>>arr[i];
		}

		bool flag = true;
		for(i=0;i<N;i++){
			if(arr[arr[i]-1] != i+1){
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<"ambiguous\n";
		}else{
			cout<<"not ambiguous\n";
		}
		cin>>N;

	}
	
    return 0;
}