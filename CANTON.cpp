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
	int T;
	cin>>T;

	while(T--){
		ll int num;
		cin>>num;

		ll int n=ceil((-1+sqrt(1+8*num))/2);
        ll int sub = num - n*(n-1)/2;
        ll int sum = n+1;
        if (n%2==0)
            printf("TERM %lld IS %lld/%lld\n",num , sub , sum-sub);    
        else
            printf("TERM %lld IS %lld/%lld\n",num, sum -sub ,sub);       
	}
    return 0;
}