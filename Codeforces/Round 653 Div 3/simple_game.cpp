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
    ll n, m;
    ll k;
    cin>>n>>m;
    ll num_m = n - m + 1;
    ll num_a = m - 1;
    if(n==m)
    	cout<<m;
    else if(num_m>num_a){
    	cout<<m+1;
    }
    else{
    	cout<<m-1;
    }
    cout<<endl;

    return 0;
}