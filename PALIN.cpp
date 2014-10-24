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
	int T,i,j;
	cin>>T;

	while(T--){
		string number, ans;
		cin>>number;
		ans = number;
		int inc, dec;
		inc = number.size()/2;
		dec = inc;
		if(number.size()%2==0)	dec--;

		for(i=inc, j=dec; i<number.size() && j>=0; i++, j--){
			ans[i] = ans[j];
		}

		while(ans.size()<=number.size() && ans<=number){
			i=dec; j=inc;
            while((ans[i]-'0')==9 && i>=0 && j<ans.size())
            {
                ans[i] = ans[j] = '0';
                i--;
                j++;
            }
            if(i<0)
            {
                ans = "1"+ans;
                int l = ans[ans.size()-1]-'0';
                l++;
                ans[ans.size()-1] = (l+'0');
            }
            else
            {
                int l = ans[i]-'0';
                l++;
                ans[i]=ans[j]=(l+'0');
                dec--; inc++;
            }
		}
		cout<<ans<<endl;
	}

    return 0;
}