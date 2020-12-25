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
    	vector<ll> arr(n);
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	int win[k];
    	for(int i=0;i<k;i++){
    		cin>>win[i];
    	}
    	sort(arr.begin(), arr.end());
    	sort(win, win+k);

    	int high = n-1;
    	int low = 0;
    	ll ans = 0;
    	for(int i=0;i<k;i++){
    		if(win[i]==1){
    			ans = ((ans + arr[high])  +arr[high]);
    			high--;
    		}
    		else{
    			ans = ((ans + arr[high])  +arr[low]);
    			high--;
    			low += win[i]-1;
    		}

    	}
    	cout<<ans<<endl;

    }

    return 0;
}