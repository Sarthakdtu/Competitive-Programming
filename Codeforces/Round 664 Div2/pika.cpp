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
    	int q;
    	cin>>n>>q;
    	ll arr[n];
    	// cout<<"???????????";
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}

    	ll ans = 0;
    	// ll maxe = arr[0];
    	ll mine = n+1;
    	// cout<<"?";
    	// int i=n;
    	// while(i<n-1){
    	// 	while(i<n-1 && arr[i]<arr[i+1]){
    	// 		maxe = max(maxe, arr[i]);
    	// 		cout<<arr[i];
    	// 		i++;
    	// 	}
    	// 	ans += maxe;
    	// 	cout<<maxe<<endl;
    	// 	// i--;
    	// 	i++;
    	// 	// while(i<n-1 && arr[i]>arr[i+1]){
    	// 	// 	mine = min(mine, arr[i]);
    	// 	// 	i++;
    	// 	// }
    	// 	// ans -= mine;
    	// 	// i++;
    	// 	// if(i==n)
    	// 	// 	ans+=mine;
    	// }
    	cout<<ans<<endl;


    }

    return 0;
}