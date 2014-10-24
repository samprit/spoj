#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>

#define ll long long

using namespace std;

bool valid1(int num){
	if(num>0 && num<=9){
		return true;
	}else {
		return false;
	}
}

bool valid2(int num1, int num2){
	int temp = num2*10 + num1;
	if(temp>9 && temp<=26){
		return true;
	}else{
		return false;
	}
}

int main()
{
	string input;
	cin>>input;

	while(input!="0"){

		ll int dp[input.size()];
		dp[0] = 1;
		int i;

		for(i=1;i<input.size();i++){

			dp[i] = (valid1(input[i]-'0')?dp[i-1]:0) + (valid2(input[i]-'0', input[i-1]-'0')?dp[(i-2<0)?0:(i-2)]:0);

		}


		cout<<dp[input.size()-1]<<endl;
		cin>>input;
	}


    return 0;
}