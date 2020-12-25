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
    	}
    	if(n==1){
    		cout<<"First"<<endl;
    		continue;
    	}	
    	int idx = n;
    	for(int i=n-2;i>-1;i++){
    		if(arr[i]!=1){
    			idx = i+1;
    			break;
    		}
    	}

    	bool flag = false;
    	int i = 0;
    	while(i<idx){
    		if(i==idx-1){
    			arr[i] = 0;
    			flag = !flag;
    			i++;
    		}
    		if(arr[i]==0){
    			i++;
    		}
    		else{
    			if(arr[i]==1){
    				arr[i] = 0;
    				i++;
    			}
    			else{
    				arr[i] = 1;
    			}
    			flag = !flag;
    		}
    	}

    	int num = -1;
    	if(idx!=n){
    		num = (n-2-idx + 1);
    		cout<<"odd";
    		if(num&1){
    			flag = !flag;
    		}
    		else{
    			flag = flag;
    		}
    	}
    	

    	if(flag){
    		cout<<"First";
    	}
    	else{
    		cout<<"Second";
    	}
    	cout<<endl;

    }
    return 0;
}