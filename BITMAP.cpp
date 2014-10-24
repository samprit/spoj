//Includes
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility> //Pair
#include <algorithm>
#include <sstream> // istringstream>> ostring stream<<
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <cstring>
#include <limits>
using namespace std;
 
//M lazy ;)
#define ll long long
typedef istringstream iss;
typedef ostringstream oss;

#define ESP (1e-9)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
 
void assertOO(int a, int n, int b) {
    assert( a <= n && n <= b );
}

struct node{
	ll int x, y, dist;
};

int main(){

	ll int T, N, M, i, j,x,y;
	scanf("%lld",&T);
	int neigX[] = {-1,0,0,1};
	int neigY[] = {0,-1,+1,0};

	while(T--){
		scanf("%lld %lld",&N, &M);
		char arr[N][M];
		ll int dist[N][M];

		queue<struct node> bfs;
		for(i=0;i<N;i++){
			scanf("%s",arr[i]);
			for(j=0;j<M;j++) {
				if(arr[i][j]=='1'){
					struct node temp;
					temp.x = i; temp.y = j;
					temp.dist = 0;
					bfs.push(temp);
					dist[i][j]=0;
				}else{
					dist[i][j]=imax;
				}
			}
		}
		struct node temp, push;
		while(!bfs.empty()){
			temp = bfs.front();
			bfs.pop();

			for(i=0;i<4;i++){
				x = temp.x + neigX[i];
				y = temp.y + neigY[i];

				if(x>=0 && x<N && y>=0 && y<M && dist[x][y]==imax){
					dist[x][y] = temp.dist + 1;
					push.x = x; push.y = y;
					push.dist = dist[x][y];
					bfs.push(push);
				}
			}
		}

		for(i=0;i<N;i++){
			for(j=0;j<M;j++){
				printf("%lld ", dist[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}