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
    	int n;
    	cin>>n;
    	ll arr[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}

    	map<ll, ll> m;
    	for(int i=0;i<n;i++){
    		ll c = 0;
    		while(arr[i]){
    			c++;
    			arr[i] = arr[i]/2;
    		}
    		m[c]++;
    	}

    	// sort(bit, bit+n);
    	ll ans = 0;

    	for(map<ll, ll>::iterator i= m.begin();i!=m.end();i++){
    		ll val = i->second;
    		ans  += ((val)*(val-1))/2;
    	}
    	cout<<ans<<endl;
    }

    return 0;
}