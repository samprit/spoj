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

int desc(int a, int b){
	return a>b;
}

int main()
{
	int T,i;
	cin>>T;

	for(int k=0;k<T;k++){
		ll int stamps, people;
		cin>>stamps>>people;

		int arr[people];

		for(i=0;i<people;i++){
			cin>>arr[i];
		}

		sort(arr, arr+people, desc);

		ll int sum=0;
		for(i=0;i<people;i++){
			sum += arr[i];
			//cout<<arr[i]<<" "<<sum<<"\n";
			if(sum>=stamps)	break;
		}

		if(sum<stamps){
			cout<<"Scenario #"<<k+1<<":\n"<<"impossible"<<"\n\n";
		}else{
			cout<<"Scenario #"<<k+1<<":\n"<<i+1<<"\n\n";
		}
	}
    return 0;
}