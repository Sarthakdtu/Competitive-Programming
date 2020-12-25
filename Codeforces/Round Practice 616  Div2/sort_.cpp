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
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    	}
    	bool flag = true;
    	for(int i=0;i<n-1;i++){
    		if(arr[i]>arr[i+1]){
    			flag = false;
    			break;
    		}
    	}

    	if(flag){
    		cout<<0<<endl;
    		continue;
    	}
    	else{
    		flag = true;
    		for(int i=0;i<n;i++){
    			if(arr[i]==i+1){
    				flag = false;
    				break;
    			}
    		}

    		if(flag){
    			cout<<1<<endl;
    		}
    		else{
    			cout<<2<<endl;
    		}
    	}








    }

    return 0;
}