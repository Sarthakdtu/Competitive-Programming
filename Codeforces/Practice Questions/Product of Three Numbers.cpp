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
    	ll n;
    	cin>>n;
    	int idx = 0;
    	int arr[3];
    	ll on = n;
    	//cout<<sqrt(on)<<" ";
    	for(int i=2;i<=sqrt(on);i++){
    		if(n%i==0){
    			//cout<<i<<" ";
    			arr[idx]=i;
    			idx++;
    			n = n/i;
    			if(idx==2){
    				break;
    			}
    			
    			//cout<<n<<"";
    		}
    	}
    	if(idx==2){
    		if(n>1 && arr[0]!=n && arr[1]!=n){
    			arr[idx] = n;

    			idx++; 
    		}
    	}
    	if(idx==3){
    		cout<<"YES"<<endl;
    		cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}






    }

    return 0;
}