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
    	cin>>n;
    	ll arr[n];
    	ll m = 0;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		m = max(m, arr[i]);
    	}
    	int prev = arr[0];
    	bool flag = true;
    	// vector<ll> freq(m+1);
    	for(int i=1;i<n;i++){
    		if(arr[i] != prev){
    			flag = false;
    			break;
    		}
    		prev = arr[i];
    		// freq[arr[i]].push_back(i+1);
    	}
    	if(flag){
    		cout<<"NO"<<endl;
    		continue;
    	}
    	vector<ll> freq;
    	cout<<"YES"<<endl;
    	int idx = -1;
    	for(int i=1;i<n;i++){
    		if(arr[i]!=arr[0]){
    			cout<<i+1<<" "<<1<<endl;
    			idx = i+1;
    		}
    		else{
    			freq.push_back(i+1);	
    		}
    	}

    	for(int i=0;i<freq.size();i++){
    		cout<<freq[i]<<" "<<idx<<endl;
    	}



    	












    }

    return 0;
}