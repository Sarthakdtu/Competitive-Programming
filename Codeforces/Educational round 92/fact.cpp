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
    	ll n;
    	cin>>n;
    	ll f = 1;
    	for(ll i=1;i<=n;i++){
    		f = ( f * i ) % mod;
    	}
    	cout<<f<<endl;
    	ll a =   ( (n * (n-1) ) / 2 ) + 2;
    	//cout<<a;
    	a = a%mod;
    	cout<<a<<endl;
    	a = (f - a ) % mod ;

    	cout<<a<<endl;   

    return 0;
}