#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>
#include <list>
#include <climits>

#define ll long long
#define ull unsigned long long

using namespace std;

int main(){

	ll int T, i;
	cin>>T;

	while(T--){
		ll int ans = 0;
		string input;
		int prev = 0;		//0 = no op seen, 1 = +, 2 = -, 3 = *, 4 = /
		while(1){
			cin>>input;
			if(input == "="){
				break;
			}
			if(input == "+"){
				prev = 1;
			}else if(input == "-"){
				prev = 2;
			}else if(input == "*"){
				prev = 3;
			}else if(input == "/"){
				prev = 4;
			}else if(prev == 0){
				ans = atoi(input.c_str());
			}else{
				switch(prev){
					case 1:
						ans = ans + atoi(input.c_str());
						break;
					case 2:
						ans = ans - atoi(input.c_str());
						break;
					case 3:
						ans = ans * atoi(input.c_str());
						break;
					case 4:
						ans = ans / atoi(input.c_str());
						break;
				}
			}
		}
		cout<<ans<<"\n";
	}

    return 0;
}