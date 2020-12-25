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
    	for(int i=0;i<n;i++)
    		cin>>arr[i];

    	bool flag = true;
    	for(int i=1;i<n;i++){
    		if(arr[i]>arr[i-1]){
    			flag = false;
    			break;
    		}
    	}
    	if(flag){
    		cout<<0<<endl;
    		continue;
    	}
    	flag = true;
    	for(int i=1;i<n;i++){
    		if(arr[i]<arr[i-1]){
    			flag = false;
    			break;
    		}
    	}
    	if(flag){
    		cout<<0<<endl;
    		continue;
    	}
    	int peak =  -1;
    	if(arr[n-2]<arr[n-1])
    		peak = 0;
    	
    	int idx = -1;

    	for(int i = n-1;i>0;i--){
    		if(arr[i-1]<arr[i]){
    			peak = 0;
    		}
    		else if(peak == 0 && arr[i-1]>arr[i]){
    			idx = i;
    			break;
    		}

    	}
    	if(idx!=-1)
    		cout<<idx<<endl;
    	else
    		cout<<0<<endl;
    }

    return 0;
}