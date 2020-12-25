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

void solve(int n, ll arr[], ll x, int p, int k, int c){
	int ans = 0;
	if(c==0){
		ans = p;
		for(int i=0;i<p;i++){
			if(arr[i]>x){
				ans = i; 
				break;
			}
		}
		cout<<(p - ans + 1);
	}
	else if (c==1){
		ans = p;
		for(int i=n-1;i>p;i--){
			if(arr[i]<x){
				ans = i;
				break;
			}
		}
		cout<<(ans - p)+1;
	}
} 

int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n, p, k;
    	ll x;
    	cin>>n>>x>>p>>k;
    	k--;
    	p--;
    	ll arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	sort(arr, arr+n);

    	if(arr[p] == x){
    		cout<<0<<endl;
    		continue;
    	}
    	else{
    		if(p<k){
    			if(x<arr[p])
    				solve(n, arr, x, p, k, 0);
    			else
    				cout<<-1;
    		}
    		else if(p>k){
    			if(x<arr[p])
    				cout<<-1;
    			else
    				solve(n, arr, x, p, k, 1);
    		}
    		else{
    			if(x<arr[p])
    				solve(n, arr, x, p, k, 0);
    			else
    				solve(n, arr, x, p, k, 1);
    		}
    	}
    	cout<<endl;

    }

    return 0;
}