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
    int n, e;
    cin>>e>>n;
    int teams = 0;
    while(e!=0 && n!=0 && e+n>=3){
    	if(e>n){
			//2 e 1 n
			e -= 2;
			n--;
			teams++;
    	}
    	else{
    		e--;
    		n -= 2;
    		teams++;
    	}
    }

    cout<<teams<<endl;


    return 0;
}