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
	    int T;
	    cin>>T;
	    for(int t=1;t<=T;++t){
	    	int n;
	    	cin>>n;
	    	int arr[n];
	    	int rec = 0;
	    	for(int i=0;i<n;++i){
	    		cin>>arr[i];
	    	}
	    	
	    	int dp[n][4];
	    	// memset(dp,  n+100,sizeof(dp));
	    	for (int i = 0; i < n; ++i)
	    	{
	    		for (int j = 0; j < 4; ++j)
	    		{
	    			dp[i][j]=n+1;
	    		}
	    		
	    	}
	    	for(int i=0;i<4;i++){
	    		dp[n-1][i] = 0;
	    	}
	    	

	    	for(int i=n-2;i>-1;i--){
	    		for(int j=0;j<4;j++){
	    			int res = INT_MAX;

	    			for(int k=0;k<4;k++){
	    				int curr = dp[i+1][k];
	    				if(arr[i]<arr[i+1] && k<=j){
	    					curr++;
	    				}
	    				else if(arr[i]>arr[i+1] && k>=j){
	    					curr++;
	    				}
	    				else if(arr[i]==arr[i+1]&&k!=j){
	    					curr++;
	    				}
	    				// res = min(res, curr);
	    				dp[i][j] = min(curr, dp[i][j]);
	    			}
	    			// dp[i][j] = res;
	    		}

	    	}
	    	// for (int i = 0; i < n; ++i)
	    	// {
	    	// 	for (int j = 0; j < 4; ++j)
	    	// 	{
	    	// 		cout<<dp[i][j]<<" ";
	    	// 	}
	    	// 	cout<<endl;
	    	// }
	    	rec = INT_MAX;
	    	for(int i=0;i<4;i++){
	    		rec = min(rec, dp[0][i]);
	    	}

	    	cout<<"Case #"<<t<<": "<<rec<<endl;;


	    	


	    }

	    return 0;
	}