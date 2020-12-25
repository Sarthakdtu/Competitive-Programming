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
    	if(n<31){
    		cout<<"NO";
    	}
    	else if(n==31){
    		cout<<"YES \n14 6 10 1";
    	}
    	else{
    		int d = n-31;
    		if(d==6 ||d==15 ||d==10){
    			cout<<"YES \n6 10 14 "<<n-30;
    		}
    		else
    			cout<<"YES \n6 10 15 "<<n-31;
    	}
    	cout<<endl;






    }

    return 0;
}