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

ll minCost(ll A[], int n) 
{ 
    
    ll cost = 0; 
  
    
    // sort(A, A + n); 
  
   
    ll K = A[n / 2]; 
  
    
    for (int i = 0; i < n; ++i) 
        cost += abs(A[i] - K); 
  
   
    if (n % 2 == 0) { 
        ll tempCost = 0; 
  
        K = A[(n / 2) - 1]; 
  
       
        for (int i = 0; i < n; ++i) 
            tempCost += abs(A[i] - K); 
  
       
        cost = min(cost, tempCost); 
    } 
  
 
    return cost; 
} 
 
int main()
{
    sarthak();
    int t;
    cin>>t;
    while(t--){
    	int n, m;
    	cin>>n>>m;
    	ll arr[n][m];
    	ll pal[n][m];
    	ll sum = 0;
    	int rn = (n+1)/2;
   		int rm = (m+1)/2;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin>>arr[i][j];
    			sum += arr[i][j];
    		}
    	}
    	ll ans = 0;
    	ll so[4];
    	for(int i=0;i<rn;i++){	
    		for(int j=0;j<rm;j++){

    			so[0] = arr[i][j];
	    		so[1] = arr[i][m-j-1];
	    		so[2] = arr[n-i-1][m-j-1];
	    		so[3] = arr[n-i-1][j];
	    		sort(so, so+4);
	    		ll p = minCost(so, 4);
	    		if(i==n-i-1 || j==m-j-1)
	    			p=p/2;
	    		ans += p;
	    		// cout<<ans<<endl;
    		}
    	}


    	cout<<ans<<endl;
    	
    }

    return 0;
}