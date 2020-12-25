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
    	ll sum = 0;
    	bool flag = false;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		if(arr[i]>=0)
    			flag = true;
    		sum += arr[i];
    	}

    	if(!flag){
    		cout<<"NO"<<endl;
    		continue;
    	}

    	ll curr = 0, m = 0;

    	for(int i=0;i<n-1;i++){
    		curr += arr[i];
    		if(curr<0){
    			curr = 0;
    		}
    		m = max(curr, m);
    	}
    	curr = 0;
    	for(int i=1;i<n;i++){
    		curr += arr[i];
    		if(curr<0){
    			curr = 0;
    		}
    		m = max(curr, m);
    	}

    	if(m>=sum){
    		cout<<"NO";
    	}
    	else
    		cout<<"YES";
    	cout<<endl;








    }

    return 0;
}