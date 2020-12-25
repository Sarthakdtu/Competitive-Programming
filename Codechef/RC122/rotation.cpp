#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = (1000*1000*1000) + 7;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        ll k;
        cin>>n>>k;
        ll  ans = ((n%m) * n%m)%m;
        if(k==1){
           cout<<ans<<endl;
           continue;
        }

        if(n==0){
            ans = (ans%m + ((k-1)%m * k%m)%m ) %m;
            cout<<ans<<endl;
            continue;
        }


        ll ogk = k;
        if(k&1){
            k--;
        }
        
            ll k2 = k/2;
            ans = (ans%m + (((k2)%m)*(2*n)%m)%m + ((k2-1)%m * (k2)%m)%m ) %m;

            if(ogk != k){
                ans = (ans%m + k%m)%m;
            }
        
        cout<<ans;       
        cout<<endl;

    }
    return 0;
}