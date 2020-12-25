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
    	ll m = 0, idx = 0;
    	for(int i=0;i<n;i++){
    		cin>>arr[i];
    		// if(arr[i]>m){
    		// 	idx = i;
    		// 	m = arr[i];
    		// }	
    	}

    	int flag = 1;
    	//arr[0] = 0;
    	ll count = 0;
    	for(int i=0;i<n-1;i++){
    		if(flag ==1 && arr[i]<arr[i+1]){
    			m++;
    		}
    		else if(flag==1 && arr[i]>arr[i+1]){
    			flag = 0;
    		}
    		else {
    			flag = -1;
    			break;
    		}
    		
    	}
    	if(flag!=-1){
    		cout<<"Yes"<<endl;
    		continue;
    	}

    	flag = 1;
    	for(int i=0;i<n;i++){
    		if(flag && arr[i] >= i ){
    			m = arr[i];
    			arr[i] = count;

    			count++;
    			//arr[i+1] = min(arr[i])
    		}
    		else if(flag == 1 && arr[i]<i){
    			//count -= 2;
    			arr[i-1] = m;
    			flag = 0;
    			arr[i] = min(arr[i-1]-1, arr[i]);
    			if(arr[i]<0){
    				flag = -1;
    				break;
    			}
    		}
    		else if(flag == 0){
    			arr[i] = min(arr[i-1]-1, arr[i]);
    			if(arr[i]<0){
    				flag = -1;
    				break;
    			}
    		}
    	}

    	// for(int i=0;i<n;i++){
    	// 	cout<<arr[i]<<" ";
    	// }

    	if(flag != -1){
    		cout<<"Yes";
    	}
    	else
    		cout<<"No";
    	cout<<endl;


    }

    return 0;
}