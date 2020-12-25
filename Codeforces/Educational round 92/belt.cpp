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
    	int arr[n][m];

    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			char c;
    			cin>>c;
    			if(c=='D')
    				arr[i][j] = 1;
    			else
    				arr[i][j] = 8;
    		}
    	}
    	int moves = 0;
    	for(int i=0;i<n-1;i++){
    		if(arr[i][m-1]==8){
    			moves++;
    			//arr[i][m-1] = 1;
    		}
    	}

    	for(int i=0;i<m-1;i++){
    		if(arr[n-1][i]==1){
    			moves++;
    			//arr[i][n-1] = 'D';
    		}
    	}
    	cout<<moves<<endl;







    }

    return 0;
}