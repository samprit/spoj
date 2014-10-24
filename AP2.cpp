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

	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long c,c3,s,d,n,i,a;
		scanf("%lld%lld%lld",&c,&c3,&s);
		n=(2*s)/(c+c3);
		d=(c3-c)/(n-5);
		a=c-2*d;
		printf("%lld\n",n);
		for(i=0;i<n;i++)
		{
			printf("%lld",(a+i*d));
			printf(" ");
		}
	}
	
	return 0;
}