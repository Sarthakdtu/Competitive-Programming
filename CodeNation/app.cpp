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
    	ll n;
    	cin>>n;
    	ll s = ll(sqrt(n));
    	// cout<<s<<endl;
    	ll op = 1;
    	// ll no = n;
    	
    	// op++;
    	n--;
    	op = op + (s-1) + (n/s -1);
    	// cout<<n/s<<endl;
    	if(n==0)
    		op = 0;
    	cout<<op<<endl;
    }

    return 0;
}