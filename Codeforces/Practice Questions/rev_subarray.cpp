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
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		if(!i&1){
    			sum += arr[i];
    			arr[i] = -arr[i];
    		}
    	}
    	ll osum = 0, esum = 0, mesum = 0, mosum = 0;
    	for(int i=0;i<n;i++){
    		esum += arr[i];
    		osum += arr[i];
    		if(i&1){
    			osum += 
    		}
    		else{

    		}
    		

    	}







    }

    return 0;
}