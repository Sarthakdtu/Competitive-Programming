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
   
	int n, m;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int j=0;j<m;j++)
		cin>>b[j];

	int ans = 1;
	int arr[n][m];
	int sol[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arr[i][j] = a[i]&b[j]; 
		}
		if(i==0)
			sol[i][j] = arr[i][j];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
		}

	}
	cout<<ans<<endl;








    
    return 0;
}