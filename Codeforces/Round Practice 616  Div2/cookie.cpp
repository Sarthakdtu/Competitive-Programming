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
    	ll a, b, n, m;
    	cin>>a;
    	cin>>b;
    	cin>>n;
    	cin>>m;

    	if( a + b < n + m){
    		cout<<"No";
    	}
    	else if(min(a, b)<m){
    		cout<<"No";
    	}
    	else{
    		cout<<"Yes";
    	}

    	cout<<endl;





    }

    return 0;
}