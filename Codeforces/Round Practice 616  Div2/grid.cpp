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
    	int n, k;
    	cin>>n>>k;
    	if(k==0){
    		cout<<0<<endl<<0<<endl;
    		continue;
    	}
    	int arr[n][n];

    	for(int i=0;i<n;i++){
    		arr[i][i] = 1;
    		k--;
    		if(k==0)
    			break;
    	}

    	if(k>0){
    		for(int j=n-1,i=0;j>-1;j--, i++){
    			if(arr[i][j]==1){
    				continue;
    			}

    			arr[i][j] = 1;
    			k--;
    			if(k==0)
    				break;
    		}
    	}

    	int c = 1, idx=1;
    	while(k>0){
    		for(int i=idx;i<n;i++){
    			if(arr[i][i-idx]==1){
    				continue;
    			}

    			arr[i][i-idx] = 1;
    			k--;
    			if(k==0)
    				break;
    		}
    		if(k>0){
    			for(int i=idx;i<n;i++){
    				if(arr[i-idx][i]==1){
    				continue;
    			}
    			arr[i-idx][i] = 1;
    			k--;
    			if(k==0)
    				break;
    			}
    		}
    		idx++;	
    	}

    	int mx= 0, mn = INT_MAX, curr=0;
    	int mxc= 0, mnc = INT_MAX, currc=0;
    	int sum = 0;
    	for(int i=0;i<n;i++){
    		curr = 0;
    		currc = 0;
    		for(int j=0;j<n;j++){
    			curr += arr[i][j]; 
    			currc += arr[j][i];  
    		}
    		mn = min(mn, curr);
    		mx = max(curr, mx);
    		mnc = min(mnc, currc);
    		mxc = max(currc, mxc);
    	}

    	sum = (mx - mn)*(mx - mn) + (mxc - mnc)*(mxc - mnc);
    	// mx= 0, mn = INT_MAX, curr=0;

    	// for(int i=0;i<n;i++){
    	// 	curr = 0;
    	// 	for(int j=0;j<n;j++){
    	// 		curr += arr[j][i];  
    	// 	}
    	// 	mn = min(mn, curr);
    	// 	mx = max(curr, mx);
    	// }
    	// sum += (mx - mn)*(mx - mn);

    	cout<<sum<<endl;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cout<<arr[j][i];  
    		}
    		cout<<endl;
    	}
    	

    }

    return 0;
}