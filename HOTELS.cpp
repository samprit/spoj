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

	ll int N, M, i;
	ll int left=0, right=0, max=0, sum=0;
	scanf("%lld %lld",&N, &M);

	ll arr[N];

	for(i=0;i<N;i++){
		scanf("%lld",&arr[i]);
	}
	
	while(right<N){
		if(sum + arr[right] <= M){
			sum += arr[right];
			right++;
		}else{
			if(left==right){
				left++;	right++;
			}else{
				sum -= arr[left];
				left++;
			}
		}
		if(sum>max){
			max = sum;
		}
	}

	cout<<max<<"\n";

	return 0;
}