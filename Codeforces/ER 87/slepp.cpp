#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a<=b){
            cout<<b<<endl;
            continue;
        }
        else if(c<=d){
            cout<<"-1"<<endl;
            continue;
        }

        a -= b;
        ll ans = b;
        ll rem = c-d;
        ll i = a/rem;
        if(a%rem!=0)
            i++;
        ans += i*c;

        cout<<ans<<endl;
    }
    return 0;
}