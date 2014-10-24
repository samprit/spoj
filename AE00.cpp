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
	int N,i,j,cnt=0;
	cin>>N;

	for(i=1;i<=sqrt(N);i++)
        for(j=i+1;i*j<=N;j++)
            cnt++;

    //    counting no. of squares
    cnt+=sqrt(N);
    printf("%d\n",cnt);
    return 0;
}