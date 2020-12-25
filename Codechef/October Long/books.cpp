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
    	int ans = 0;
    	int c = 0;
    	for(int i=0;i<n;i++){
    		c=0;
    		if(arr[i]==1){
    			i++;
    			while(i<n && arr[i]==0){
    				c++;
    				i++;
    			}
    			i--;
    		}
    		if(i<n-1 && arr[i+1]==1)
    			ans+=c;
    		
    	}

    	cout<<ans<<endl;




    }

    return 0;
}