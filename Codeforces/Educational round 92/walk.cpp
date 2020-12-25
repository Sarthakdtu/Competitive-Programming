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
 
int func(int arr[], int n, int idx, int k, int z, bool l){

	if(k<=0){
		return 0;
	}
	else if(k>0 && (idx>n-1 ||idx<0) ){
		return INT_MIN;
	}
	else if(k==1 && (idx==n-1 || idx==0 ))
		return arr[idx];


	int left = 0, right = 0;
	
	right = func(arr, n, idx+1, k--, z, false) + arr[idx];
	
	if(z>0 && !l){
		left = func(arr, n, idx-1, k--, z--, true) + arr[idx];
	}

	return max(left, right);

}

int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n, k, z;
    	cin>>n>>k>>z;

    	int arr[n];
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}

    	int ans = func(arr, n, 0, k, z, true);
    	cout<<ans<<endl;










    }

    return 0;
}