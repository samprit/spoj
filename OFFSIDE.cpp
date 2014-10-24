#include <iostream>
#include <cstdio>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <map>
#include <climits>

#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ll int A,D,i;
    scanf("%lld %lld",&A, &D);

    while(A!=0 || D!=0){
        ll int B, C, minB=INT_MAX, min1C=INT_MAX, min2C=INT_MAX;
        for(i=0;i<A;i++){
            scanf("%lld",&B);
            if(minB > B) minB = B;
        }

        for(i=0;i<D;i++){
            scanf("%lld",&C); 
            if(min1C > C){
                min2C = min1C;
                min1C = C;
            }else if(min2C > C){
                min2C = C;
            }
        }
        //sort(B,B+A);
        //sort(C,C+D);
        if(minB < min2C){
            printf("Y\n");
        }else{
            printf("N\n");
        }
        scanf("%lld %lld",&A, &D);
    }
    return 0;
}