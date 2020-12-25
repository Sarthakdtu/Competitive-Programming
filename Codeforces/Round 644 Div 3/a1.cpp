#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        ll l = min(a, b);
        l = 2*l;
        if(l*l<2*a*b)
            l = max(a, b);
            l = l*l;
            cout<<l<<endl;
        
    



    }


    return 0;
}