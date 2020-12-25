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
    	string f = "FastestFinger";
    	string a = "Ashishgup";
    	if(n==1){
    		cout<<f<<endl;
    		continue;
    	}
    	if(n==2){
    		cout<<a<<endl;
    		continue;
    	}
    	if(n&1){
    		cout<<a<<endl;
    		continue;
    	}
    	else{
    		int flag=0;

    		ll jj = n;
    		while(n>0 && n%2==0){
    			flag++;
    			n = n/2;
    		}
    		n = jj;
    		
    		int p=0;
    		//cout<<n<<" ";
    		for(int i=3;i<=sqrt(n);i+=2){
    			while(n>0 && n%i==0){
    				n = n/i;
    				p++;
    				//cout<<"?";
    			}
    		}
    		// cout<<n<<" ";
    		// cout<<p<<" "<<flag<<endl;
    		if(p==1 && flag==1){
    			cout<<f<<endl;
    		}
    		else if(p==0){
    			cout<<f<<endl;
    		}
    		else if(flag==1){
    			cout<<a<<endl;
    		}
    		else{
    			cout<<a<<endl;
    		}
    	}
    }

    return 0;
}