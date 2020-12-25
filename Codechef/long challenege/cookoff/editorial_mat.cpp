
#include <iostream>
#include <vector>
#include <set>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <stdio.h>
#include <cmath>
#include <queue>
#include <string>
#include <map>
#include <complex>
#include <stack>
#include <set>
 
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define ll long long int
#define vi vector<int>
#define ii pair<int,int>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pll pair<ll,ll>
#define cd complex<double> 
#define vv vector
 
using namespace std;
 
const int INF = 1e9;
const int MAXN = 1e5+5;
const ll MOD = 1e9 + 7;
 
ll fxp(ll a, ll b){
	if(b == 0)return 1;
	if(b%2 == 0){
		ll c = fxp(a,b/2);
		return (c*c)%MOD;
	}
	return (a*fxp(a,b-1))%MOD;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		ll n,a;
		cin >> n >> a;
		ll num = 1;
		ll sum = 0;
		ll p = 1;
		FOR(i,n){
			ll pp = fxp((a*p)%MOD , num);
			num += 2;
			p *= pp;
			p %= MOD;
			sum += pp;
            cout<<pp<<" + ";
			sum %= MOD;
		}
		cout << sum << endl;
	}
 
	return 0;
} 