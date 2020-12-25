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
    ll m, n;
    cin>>n>>m;
    ll mi = 0, ma = 0;
    mi = (n/m)*(n/m - 1)/2;
    mi = mi*(m);
    //cout<<mi<<" ";
    mi += (n/m)*(n%m);
    
    ma = (n-m+1)*(n-m)/2;
    
    cout<<mi<<" "<<ma<<endl;



    return 0;
}