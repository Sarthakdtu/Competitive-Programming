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
    ll ans = 0;
    ll f = 1;
    for(int i=1;i<n+1;i++){
    	f *= i;
    }
    ll r = 1;
    for(int i=1;i<=(n/2);i++){
    	r *= i; 
    }

    ans = f/(r*r);
    r = r/(n/2);
    ans *= (r*r);
    ans = ans/2;
    cout<<ans<<endl; 	 
    return 0;
}