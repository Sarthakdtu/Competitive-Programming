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
    	ll x, y,z;
    	cin>>x>>y>>z;
    	ll a, b, c;
    	bool flag = false;
    	if(x==y && z<=x){
    		a = x;
    		flag = true;
    		b = c = z;
    	}
    	else if(y==z && x<=y){
    		c = y;
    		a = b = x;
    		flag = true;
    	}
    	else if(z == x && y<=x){
    		flag = true;
    		b = x;
    		a = c = y;
    	}

    	if(flag){
    		cout<<"YES"<<endl;
    		cout<<a<<" "<<b<<" "<<c;
    	}
    	else{
    		cout<<"NO";
    	}
    	cout<<endl;






    }

    return 0;
}