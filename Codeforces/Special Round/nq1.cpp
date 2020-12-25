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
    	int ans = 1;
    	for(int i=n;i>0;i--){
    		int num = i;
    		int flag = 0;
    		while(num<=n){

    			if(num<=n)
    				flag++;

    			num += i;

    			if(flag == 2){
    				ans = i;
    				break;
    			}
    		}
    		if(ans==i)
    			break;
    	}

    	cout<<ans<<endl;

    }

    return 0;
}