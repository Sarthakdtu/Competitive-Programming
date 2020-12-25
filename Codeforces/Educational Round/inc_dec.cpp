#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        ll a, b;
        cin>>a>>b;
        ll d=0;
        ll bxya = b*(min(x, y)) + a*(max(x, y) - min(x, y));
        ll axy = a*(x+y);

        cout<<min(bxya, axy)<<endl;
    }


    return 0;
}
