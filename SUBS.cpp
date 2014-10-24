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

bool checkSubsequence(string txt, string s){
    int pos = -1;
    bool ok = true;
    for (int i = 0 ; ok && i != s.size() ; i++) {
        ok = (pos = txt.find(s[i], pos+1)) != string::npos;
    }
    
    return ok;
}

string powerString(string str, int k){
	if(k==0){
		return "";
	}else if(k==1){
		return str;
	}
	int i,j;
	string newStr = "";
	for(j=0;j<str.size();j++){
		for(i=0;i<k;i++){
			newStr += str[j];
		}
	}
	return newStr;
}

bool checkIfPossible(string str1, string str2, int k){

	return checkSubsequence(str1, powerString(str2, k));
}

int main()
{
	int T;
	cin>>T;

	while(T--){
		string X, Y;
		cin>>X>>Y;
		int low = 1, high = Y.size()/X.size(), mid, result;

		if(checkIfPossible(Y,X,1)){
			while(low<=high){
				mid = (high+low)/2;
				if(checkIfPossible(Y,X,mid)){
					result = mid;
					low = mid+1;
				}else{
					high = mid-1;
				}
			}
			cout<<result<<endl;
		}else{
			cout<<"0\n";
		}
	}
	
    return 0;
}