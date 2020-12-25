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
    	ll a[n];
    	ll b[n];
    	ll ma=-1, mb = -1;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		if(ma==-1)
    			ma = a[i];
    		ma = min(ma, a[i]);

    	}
    	//sort(a, a+n);
    	for(int i=0;i<n;i++){
    		cin>>b[i];
    		if(mb==-1)
    			mb = b[i];
    		mb = min(mb, b[i]);
    	}
    	//sort(b, b+n);
    	ll ans = 0;
    	for(int i=0;i<n;i++){
    		if(a[i]==ma && b[i]==mb)
    			continue;
    		ans += max(a[i]-ma, b[i]-mb);
    	}

    	cout<<ans<<endl;







    }

    return 0;
}