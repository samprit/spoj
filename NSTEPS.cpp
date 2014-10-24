#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--){
		int x, y;
		cin>>x>>y;

		if(x==y){
			if(x%2==0){
				cout<<x*2<<"\n";
			}else{
				cout<<x*2-1<<"\n";
			}
		}else if(x==y+2){
			if(y%2==0){
				cout<<y*2+2<<"\n";
			}else{
				cout<<y*2+1<<"\n";
			}
		}else{
			cout<<"No Number\n";
		}
	}
    return 0;
}