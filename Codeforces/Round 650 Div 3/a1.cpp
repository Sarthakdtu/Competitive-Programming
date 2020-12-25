#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
}
 
int main()
{
    c_p_c();
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	string ans = "";

    	for(int i=0;i<s.size();i+=2){
    		ans += s[i];
    	}
    	ans  += s[s.size()-1];
    	cout<<ans<<endl;

    }
    




    return 0;
}