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

	int n;
	cin>>n;
	ll arr[n];
	ll ma = 0;
	ll mi = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		ma = max(ma, arr[i]);
		mi = min(mi, arr[i]);
	}
	if(abs(mi) > ma){
		ma = abs(mi);
	}
	map<ll, int> m;
	ll sum = 0;
	ll ans = 0;
	int curr = 1;
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(m[sum]!=0 || sum==0){
			if(m[sum]==curr ||sum==0){
				ans++;
				sum = arr[i];
				curr = i;
			}
		}
		m[arr[i]] = i+1;
		m[sum] = i+1;
		
	}
	cout<<ans<<endl;
    return 0;
}