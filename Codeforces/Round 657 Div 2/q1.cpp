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
    	int n, m;
    	cin>>n>>m;
    	int a[n];
    	int b[m];
    	int freq[1001];
    	memset(freq, 0, sizeof(freq));
    	int elt = -1;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    		freq[a[i]]++;
    	}
    	for(int i=0;i<m;i++){
    		cin>>b[i];
    		if(freq[b[i]]!=0){
    			elt = b[i];
    		}
    	}

    	if(elt!=-1){
    		cout<<"YES"<<endl;
    		cout<<1<<" "<<elt<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}







    }

    return 0;
}