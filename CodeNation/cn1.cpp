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
    	int n, x;
    	cin>>n>>x;
    	int ans = 1;
    	if(n<=2){
    		ans = 1;
    	}
    	else{
    		int i = 3;
    		ans = 2;
    		int m = 1;
    		while(true){
    			if(n>=i && n<x+i){
    				break;
    			}
    			ans++;
    			// m++;
    			i = m*x + 3;
    			m++;
    		}
    	}
    	cout<<ans<<endl;
    }

    return 0;
}