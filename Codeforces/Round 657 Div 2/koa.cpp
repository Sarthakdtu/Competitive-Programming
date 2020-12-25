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
    	string a, b;
    	int arr[20][20];
    	cin>>a>>b;
    	memset(arr, 0, sizeof(arr));
    	int ans = 0;
    	for(int i=0;i<n;i++){
    		// if(a[i]>b[i]){
    		// 	ans = -1;
    		// 	break;
    		// }

    		arr[a[i]-'a'][b[i]-'a'] = 1;
    	}

		
		int min_ch = -1;
		for(int i=0;i<20;i++){
			min_ch = -1;
			for(int j=0;j<20;j++){
				if(arr[i][j]==1){
					min_ch = j;
					ans++;
					break;
				}
			}
			if(min_ch==-1)
				continue;

			for(int j=0;j<20;j++){
				if(arr[i][j]==1){
					arr[min_ch][j] = 1;
				}
			}
		}
		
		
		cout<<ans<<endl;

    }

    return 0;
}