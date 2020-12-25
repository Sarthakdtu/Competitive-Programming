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
    	if(n==1){
    		rec = 1;
    	}
    	else{
	    	
	    	int maxsf = -1;
	    	for(int i=0;i<n-1;++i){
	    		if(arr[i]>arr[i+1] && arr[i]>maxsf){
	    			rec++;
	    		}
	    		maxsf = max(maxsf, arr[i]);
	    	}

	    	if(arr[n-1]>maxsf){
	    		rec++;
	    	}
    	}

    	cout<<"Case #"<<t<<": "<<rec<<endl;;


    	


    }

    return 0;
}