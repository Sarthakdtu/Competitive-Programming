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
    	ll a,b,c;
    	ll k, l;
    	cin>>a>>b>>c;
    	ll mb = b/c;
    	if(b*a==c){
    		if(b!=mod-7)
    			k = b+1;
    		else
    			k = -1;
    		l = -1;
    	}
    	else if(b*a<c){
    		k = 1;
    		l = k*-1;
    	}
    	else if(a<c){
    		l = b; k = 1;
    	}
    	else{
    		l = b;k =-1;
    	}
    	cout<<k<<" ";
    	cout<<l<<endl;







    }

    return 0;
}