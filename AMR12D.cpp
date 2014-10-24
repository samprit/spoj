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

std::string reverse(std::string const &input) { 
    return std::string(input.rbegin(), input.rend());
}

int main()
{
    int T,i,j;
    cin>>T;

    while(T--){
        string str;
        cin>>str;

        bool flag = true;
        string sub, rev;

        for(i=0;i<str.size();i++){
            for(j=i;j<str.size();j++){
                sub = (str.substr(i,j-i+1));

                rev = reverse(sub); 

                if(str.find(rev) == string::npos ){
                    flag = false;
                    break;
                }
            }
            if(flag==false) break;
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}