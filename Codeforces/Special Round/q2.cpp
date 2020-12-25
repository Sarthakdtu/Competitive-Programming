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
    ll k;
    cin>>k;
    ll p = pow(k, 0.1);
    ll a = pow(p,10);
    string c = "codeforces";
    string cans = "";
    //cout<<a<<" "<<p;
    
    ll diff = a,d=0;
    	while(diff<k){
    		d++;
    		diff = pow(p, 10-d);
    		diff = diff*pow(p+1, d);
    		//d++;
    	}
    //cout<<d<<" ";
    	for(int i =0;i<c.size();i++){
    		
    		for(int j=1;j<p+1;j++)
    			cans += c[i];

    		if(d>0){
    			cans += c[i];
    		}
    		d--;

    }
   
    cout<<cans<<endl;


    return 0;
}