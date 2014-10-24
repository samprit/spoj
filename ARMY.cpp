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
	int i,j;
	int T;
	scanf("%d",&T);

	while(T--){
		int mecha, god;

		scanf("%d %d", &god, &mecha);

		int temp, max1 = -1, max2 = -1;

		for(i=0;i<god;i++){
			scanf("%d",&temp);
			if(temp>max1){
				max1= temp;
			}
		}

		for(i=0;i<mecha;i++){
			scanf("%d",&temp);
			if(temp>max2){
				max2= temp;
			}
		}
		if(max1>=max2){
			printf("Godzilla\n");
		}else{
			printf("MechaGodzilla\n");
		}

	}
	
    return 0;
}