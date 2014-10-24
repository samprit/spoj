#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int T;
	cin>>T;
	long long num;
	int fiveSquare = 5;
	long long ans = 0;
	long long temp;

	while(T--){
		cin>>num;

		ans = 0 ;
		fiveSquare = 5;
		temp = num/fiveSquare;
		
		while(temp>0){
			
			ans += temp;
			fiveSquare *= 5;
			temp = num/fiveSquare;
		}

		cout<<ans<<"\n";
	}

	return 0;
}