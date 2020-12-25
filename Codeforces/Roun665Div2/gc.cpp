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


ll gcd(ll a, ll b){
	if(b>a){
		ll temp = a;
		a = b;
		b = temp;
	}
	if(b==0){
		return a;
	}

	return gcd(b, a%b);
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
    	ll s[n];
    	ll m = mod+10;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		s[i] = arr[i];
    		
    		m = min(m, arr[i]);
    	}
    	bool flag = true;
    	sort(s, s+n);
    	//map<ll, int> ma;
    	// for(int i=0;i<n;i++){
    	// 	ma[arr[i]] = i;
    	// }
    	vector<ll> r;
    	for(int i=0;i<n;i++){
    		if(arr[i] != s[i]){
    			if(arr[i]%m!=0){
    				flag = false;
    				break;
    			}
    			r.push_back(arr[i]);
    		}
    	}
    	ll g = m;
    	//cout<<r.size();
    	// if(r.size()!=0){
    	// 	g = m;
    	// 	//cout<<r[0];
    	// }

    	if(flag)
    	for(int i=0;i<r.size();i++){
    		//cout<<r[i]<<" ";
    		g = gcd(g, r[i]);
    		//cout<<g<<" ";
    		if(g!=m){
    			flag = false;
    			break;
    		}
    	}
    	if(flag){
    		cout<<"YES";
    	}
    	else{
    		cout<<"NO";
    	}
    	cout<<endl;

    }

    return 0;
}