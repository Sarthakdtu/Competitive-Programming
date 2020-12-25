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
bool comp(ll a, ll b){
	if(a>b)
		return true;
	return false;
}
int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n;
    	ll k;
    	cin>>n>>k;
    	ll arr[n];
    	map<ll, int> m;

    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		arr[i] = arr[i]%k;
    		m[arr[i]]++;
    		//rem.insert(arr[i]);
    	}
    	ll moves = 0;
    	map<ll, int> :: iterator itr;

    	for(itr = m.begin();itr!=m.end();itr++){
    		int freq = itr->second;
    		ll diff = itr->first;
    		 if(diff==0){
    			continue;
    		 }
    		diff = k - diff;
    		freq--;
    		moves = max(moves, freq*k + diff);
    	}
    	if(moves!=0){
    		moves++;
    	}

    	//sort(arr, arr+n, comp);

    	ll x = 0;
    	
    	ll q = 0;
    	// for(int i=0;i<n;i++){
    	// 	if(arr[i]==0)
    	// 		break;
    	// 	else{
    	// 		ll diff = k - arr[i];
    	// 		if(diff>x){
    	// 			if(moves>q*k){
    	// 				q++;
    	// 			}
    	// 			moves = max(moves, q*k + diff);
    	// 		}
    	// 		else if(diff==x){
    	// 			x++;
    	// 		}
    	// 		else{
    	// 			ll dd = x - diff;
    	// 			moves = q*k + dd;
    	// 			moves = max(moves, )

    	// 		}
    	// 	}
    	// }

    	cout<<moves<<endl;





    }

    return 0;
}