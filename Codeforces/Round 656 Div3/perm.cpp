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
    	n = 2*n;
    	int arr[n];

    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	if(n==1){
    		cout<<arr[0]<<endl;
    		continue;
    	}

    	int vis[n+1];
    	memset(vis, 0, sizeof(vis));
    	int ans[n/2];
    	int idx = 0;
    	for(int i=0;i<n;i++){
    		if(vis[arr[i]]==0){
    			ans[idx]=arr[i];
    			idx++;
    			//cout<<"Inserting "<<arr[i]<<endl;
    			vis[arr[i]] = 1;
    		}
    		if(idx==n/2)
    			break;
    	}

    	for(int i=0;i<n/2;i++){
    		cout<<ans[i]<<" ";
    	}

    	cout<<endl;







    }

    return 0;
}