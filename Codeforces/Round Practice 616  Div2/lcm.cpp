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
    	if(n&1){
    		ll fact = 1;
    		for(ll i=2;i<sqrt(n)+1;i++){
    			if(n%i==0){
    				fact = i;
    				break;
    			}
    		}
    		//n = n - n/fact;
    		if(fact==1){
    			cout<<1<<" "<<n-1<<endl;
    			continue;
    		}

    		cout<<n/fact<<" "<<n-n/fact<<endl;

    	}
    	else{
    		cout<<n/2<<" "<<n/2<<endl;
    	}






    }

    return 0;
}