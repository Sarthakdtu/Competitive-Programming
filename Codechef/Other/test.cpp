#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll t;
    t = pow(10, 12);
    for(int i=0;i<68;i++){
        int a = t&1;
        cout<<a;
        t = t>>1;
        //cout<<t<<endl;
    }
    //0000000000001000101001010010101100010111
    //1099511627776
    cout<<endl;
    long long ans = pow(2, 40);
    cout<<ans;

    return 0;
}