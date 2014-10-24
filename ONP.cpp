#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int checkOp(char op){
	if(op=='+'){
		return 1;
	}else if(op=='-'){
		return 2;
	}else if(op=='*'){
		return 3;
	}else if(op=='/'){
		return 4;
	}else if(op=='^'){
		return 5;
	}else{
		return 0;
	}
}

int findPref(char op1, char op2){
	if(checkOp(op1)>=checkOp(op2)){
		return 1;
	}else if(checkOp(op1)<checkOp(op2)){
		return 0;
	}else{
		return 0;
	}
}

int main()
{
	int t,i;
	cin>>t;
	string expr;

	while(t--){
		cin>>expr;

		queue<char> output;
		stack<char> opStack;

		for(i = 0;i <expr.size(); i++){
			if(expr[i]>='a' && expr[i]<='z'){
				output.push(expr[i]);
			}else if (expr[i]=='('){
				opStack.push(expr[i]);
			}else if(expr[i]==')'){
				while(!opStack.empty() && opStack.top()!='('){
					output.push(opStack.top());
					opStack.pop();
				}
				opStack.pop();
			}else{
				if(!opStack.empty() && checkOp(expr[i])){
					while(!opStack.empty() && findPref(opStack.top(), expr[i])){
						output.push(opStack.top());
						opStack.pop();		
					}
				}
				opStack.push(expr[i]);
			}
		}
		if(!opStack.empty()){
			output.push(opStack.top());
			opStack.pop();
		}
		while(!output.empty()){
			cout<<output.front();
			output.pop();
		}
		cout<<"\n";
	}
    return 0;
}