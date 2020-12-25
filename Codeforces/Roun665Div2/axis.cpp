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
    	int n, k;
    	cin>>n>>k;
    	int ans= 0;
    	if(n<k){
    		ans = k - n;
    	}
    	else if(n==k){
    		ans  =0;
    	}
    	else{
    		int b = n-k;
    		if(b&1){
    			ans = 1;
    		}
    	}
    	cout<<ans;
    	cout<<endl;




    }

    return 0;
}