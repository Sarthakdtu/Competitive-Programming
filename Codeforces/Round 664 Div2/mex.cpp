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
    	int arr[n];
    	int count[101];
    	memset(count, 0, sizeof(count));

    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		count[arr[i]]++;
    	}
    	
    	if(count[0]==0){
    		cout<<0<<endl;
    		continue;
    	}
    	else if(count[0] == 1){

    	}
    	else{
    		for(int i=1;i<101;i++){
    			if(count[i]){
  
    			}
    		}
    	}

    }

    return 0;
}