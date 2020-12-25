#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll m = (1000*1000*1000)  +7;
int main(){
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    ll sum = 0;
    ll prev = 2;
    for(int i=3;i<=n;i+=2){
        ll i2 = i/2;
        ll curr = (ll(2*i*i2) + ll(2*(i-2)*i2));
        sum = (sum +  curr);
        //cout<<"For "<<i<<" "<<curr<<endl;
        //prev = curr;
    }
    // int i = n;
    // int i2 = i/2;
    // sum = (2*i*i2) + (2*(i-2)*i2);

    cout<<sum<<endl;

    

}

return 0;

}