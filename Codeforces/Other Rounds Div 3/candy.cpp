#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x = 1;
        for(int i=2;i<31;i++){

            ll k21 = pow(2, i) - 1;
            if(n%k21 == 0){
                x = n/k21;
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}