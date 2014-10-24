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

pair<ll int, ll int> knapsack(vector<pair<ll int, ll int> > &party, ll int budget, ll int curr){
    if(budget <= 0){
        return make_pair(0,0);
    }
    if(curr >= party.size()){
        return make_pair(0,0);
    }

    if(budget - party[curr].first < 0){
        return knapsack(party, budget, curr+1);
    }

    pair<ll int, ll int> going = knapsack(party, budget - party[curr].first, curr+1);
    pair<ll int, ll int> notGoing = knapsack(party, budget, curr+1);

    if(going.first + party[curr].second > notGoing.first){
        going.first += party[curr].second;
        going.second += party[curr].first;
        return going;
    }else{
        return notGoing;
    }
}

ll int knapsackDynamic(vector<pair<ll int, ll int> > &party, ll int budget){

    ll int dynamic[501][501]={0}, i, j;

    /*for(i=0;i<=budget;i++){
        dynamic[i][0] = 0;
    }

    for(i=0;i<=party.size();i++){
        dynamic[0][i] = 0;
    }*/

    for(i=1;i<=party.size();i++){
        for(j=1;j<=budget;j++){
            if(j < party[i-1].first){
                dynamic[j][i] = dynamic[j][i-1];
            }else{
                dynamic[j][i] = max(dynamic[j][i-1], dynamic[j-party[i-1].first][i-1]+party[i-1].second );
            }
        }
    }

    /*for(i=1;i<=party.size();i++){
        for(j=1;j<=budget;j++){
            printf("%lld ",dynamic[j][i] );
        }
        printf("\n");
    }*/

    ll int optimalCost = 0, currBudget = budget;

    while(dynamic[currBudget-1][party.size()] == dynamic[currBudget][party.size()]) {
        currBudget--;
    }
    printf("%lld ",currBudget );

    /*for(i=party.size(); i>0;i--){
        if(dynamic[currBudget][i] != dynamic[currBudget][i-1]){
            optimalCost += party[i-1].first;
            currBudget -= party[i-1].first;
            if(currBudget<=0){
                break;
            }
        }
    }*/

    return dynamic[budget][party.size()];    
}

int main(){

    ll int budget, parties,i, temp1, temp2;

    scanf("%lld %lld",&budget, &parties);

    while(budget!=0 && parties!=0){

        vector<pair<ll int, ll int> > arr(parties);

        for(i=0;i<parties;i++){
            scanf("%lld %lld",&temp1, &temp2);
            pair<ll int, ll int> eachParty(temp1,temp2);

            arr[i] = eachParty;
        }
        /*pair<ll int, ll int> sol = knapsack(arr, budget, 0);
        printf("%lld %lld\n",sol.second, sol.first);*/

        printf("%lld\n", knapsackDynamic(arr,budget));

        scanf("%lld %lld",&budget, &parties);
    }


	return 0;
}