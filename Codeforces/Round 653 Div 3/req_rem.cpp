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
    	ll x, y, n;
    	cin>>x>>y>>n;
    	ll rs = n%x;
    	if(rs==y){
    		n = n;
    	}
    	else{
    		if(rs>y){
    			n -= (-y + rs);
    		}
    		else{
    			n -= rs;
    			n -= x;
    			n += y;   
    		}

    	}
    	cout<<n<<endl;






    }

    return 0;
}