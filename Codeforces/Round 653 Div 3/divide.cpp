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
    	ll moves=0;
    	while(n>1){
    		//cout<<n<<endl<<n%3<<endl;;
    		if(n%3==0){
    			if(n%2==0){
    				n = n/6;
    				moves++;
    			}
    			else{
    				n = n/3;
    				moves += 2;
    			}
    		}
    		else{
    			moves = -1;
    			break;
    		}

    		if(n==1){
    			break;

    		}
    	}

    	if(n!=1)
    		moves = -1;

    	cout<<moves<<endl;

    }

    return 0;
}