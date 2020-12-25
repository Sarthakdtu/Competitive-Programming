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
    	string ans = "";
    	for(int i=0;i<n;i++)
    		ans += "9";
    	int d = 0;
    	int j = n;
    	d = n%4;
    	if(d>0)
    		d = 1;
    	n = (n/4) + d;


    	for(int i=j-1;i>j-1-n;i--)
    		ans[i] = '8';
    	cout<<ans<<endl;






    }

    return 0;
}