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
	int N;
	cin>>N;

	while(N!=0){

		int next=1;
		int i, temp;
		stack<int> max;

		for(i=0;i<N;i++){
			cin>>temp;
			if(temp==next){
				next++;
			}else{
				while(!max.empty() && max.top()==next){
					max.pop();
					next++;
				}
				max.push(temp);
			}
		}
		while(!max.empty() && max.top()==next){
			max.pop();
			next++;
		}


		if(max.empty()){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}

		cin>>N;
	}


    return 0;
}