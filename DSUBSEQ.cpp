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

int mod(int x){
	return ((x % 1000000007 + 1000000007) % 1000000007 );
} 

int main()
{
	int T,i;
	cin>>T;

	while(T--){
		string seq;
		cin>>seq;

		int dp[seq.size()+2];
		int last[26];

		for(i=0;i<26;i++){
			last[i] = -1;
		}

		dp[0] = 1;

		for(i=1;i<=seq.size();i++){
			dp[i] = mod(dp[i-1]*2);

			if(last[seq[i-1]-'A']!=-1){
				dp[i] = mod(dp[i] - dp[last[seq[i-1]-'A']]);
			}
			last[seq[i-1]-'A'] = i-1;
		}

		cout<<dp[seq.size()]<<endl;
	}

    return 0;
}