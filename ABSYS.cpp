#include <stdlib.h>     /* atol */
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
		string op1, op2, plus, equal, result;
		cin>>op1>>plus>>op2>>equal>>result;
		

		ll int op1Int, op2Int, resultInt;
		int flag=0;

		if(op1.find('m') != string::npos){
			flag=1;
		}else if(op2.find('m') != string::npos){
			flag=2;
		}else if(result.find('m') != string::npos){
			flag=3;
		}

		op1Int = atol(op1.c_str());
		op2Int = atol(op2.c_str());
		resultInt = atol(result.c_str());
		
		//cout<<op1Int<<" "<<plus<<" "<<op2Int<<" "<<equal<<" "<<resultInt<<endl;
		
  		if (flag==0){
  			cout<<op1Int<<" "<<plus<<" "<<op2Int<<" "<<equal<<" "<<resultInt<<endl;
  		}else if(flag==1){
  			cout<<resultInt-op2Int<<" "<<plus<<" "<<op2Int<<" "<<equal<<" "<<resultInt<<endl;
  		}else if(flag==2){
  			cout<<op1Int<<" "<<plus<<" "<<resultInt - op1Int<<" "<<equal<<" "<<resultInt<<endl;
  		}else{
  			cout<<op1Int<<" "<<plus<<" "<<op2Int<<" "<<equal<<" "<<op1Int + op2Int<<endl;
  		}

	}
    return 0;
}