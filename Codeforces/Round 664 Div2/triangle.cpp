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
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	ll a = arr[0], b=arr[1];

    	
    	int idx=-1;
    	for(int i=2;i<n;i++){
    		if(a+b<=arr[i]){
    			idx = i;
    			break;
    		}
    	}

    	if(idx==-1){
    		cout<<idx;
    	}
    	else{
    		cout<<"1 2 "<<idx+1;
    	}
    	cout<<endl;


    }

    return 0;
}