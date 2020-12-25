#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18

typedef  long long ll;
void sarthak()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
        //freopen("error.txt", "w", stderr);
	#endif
}
 
int main()
{
    sarthak();
    string s;
    cin>>s;
    ll sum = 0, with=0, wut=0;
    ll ten = 0, kl=0;
    for(int i = 0;i<s.size();i++){
    	kl = with*ten + 2*(s[i] - '0') + wut*ten;
    	ll ao = with + wut;
    	with = kl;
    	wut = ao;
    	cout<<with<<" "<<wut<<endl;
    	ten = ten*10;
    	sum = with+wut;
    }
    cout<<sum<<endl;


    return 0;
}