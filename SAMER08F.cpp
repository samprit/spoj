#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int num;
	cin>>num;

	while(num!=0){
		int n = num;
		cout<<((n*(n+1)*(2*n+1))/6)<<"\n";
		cin>>num;
	}
    return 0;
}