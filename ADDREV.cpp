#include <iostream>

using namespace std;

long reverse(long num){
	long temp = 0;
	while(num>0){
		temp = temp*10 + num%10;
		num = num/10;
	}
	return temp;
}

int main(int argc, char const *argv[])
{
	
	int T;
	cin>>T;
	long num1, num2;

	while(T--){
		cin>>num1>>num2;
		num1 = reverse(num1);
		num2 = reverse(num2);
		cout<<reverse(num1+num2)<<"\n";
	}

	return 0;
}