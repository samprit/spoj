#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int i,j;
	int col;
	cin>>col;

	while(col!=0){
		int k=0;
		string message;
		cin>>message;
		int row = message.size()/col;
		char mat[row][col];
		j=0;
		int right=1;
		for(i=0;i<row;){
			if(right){
				mat[i][j++] = message[k++];
			}else{
				mat[i][j--] = message[k++];
			}
			if(j==col){
				right=0;
				j--;
				i++;
			}
			if(j==-1){
				right=1;
				j++;
				i++;
			}
		}

		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				cout<<mat[j][i];
			}
		}
		cout<<"\n";
		cin>>col;
	}
    return 0;
}