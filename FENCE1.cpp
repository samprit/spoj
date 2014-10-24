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
    float L;
    double pi = 4*atan(1.0);

    scanf("%f",&L);

    while(L!=0){

        printf("%.2f\n",L*L/(2*(pi)));
        scanf("%f",&L);        
    }

    return 0;
}