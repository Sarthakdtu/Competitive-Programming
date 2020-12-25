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
    int t;
    cin>>t;
    while(t--){
    	ll a, b, c;
    	ll x, y, z;
    	cin>>c>>b>>a>>z>>y>>x;
    	ll sum = 0;
    	sum = min(a, y)*2;
    	int i = min(a, y);
    	a = a - i;
    	y = y - i;
    	
    	i = min(x, c);
    	x = x - i;
    	c = c - i;
    	i = min(x, a);
    	a = a-i;
    	x = x-i;

    	sum -= x*2; 


    	cout<<sum<<endl;

    }

    return 0;
}