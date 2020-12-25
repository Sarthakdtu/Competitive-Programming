#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll m = 1e9 + 7;
ll exp_(ll x, ll exp) 
{ 
    if (exp == 0) 
        return 1; 
  
    if (exp == 1) 
        return x % m; 
  
    ll t = exp_(x, exp / 2); 
    t = (t * t) % m; 
  
    if (exp % 2 == 0) 
        return t; 
    else
        return ((x % m) * t) % m; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, a;
        cin>>n>>a;
        ll n2 = 2*n;
        ll p = 1;
        ll ans = a;
        ll fans = a;

        ll pi = 1;
        ll rem = 2; 
        ll pia = 0;
        cout<<a<<" + ";
        for(ll i=2;i<=n;i++){
            pi = ((2*i-1)*(rem));
            //cout<<pi<<endl;
            pi = pi%m;
            ans = exp_(a, pi);
            cout<<ans<<" + ";
            fans = ((fans%m) + (ans%m))%m;
            //fans = fans % m;
            rem = rem + pi;
            //cout<<rem<<endl;
            rem  = rem % m;
        }
        cout<<fans<<endl; 
    }
    return 0;
}