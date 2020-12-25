#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long q, n;
        long long a, b;
        cin>>n>>q;
        long long floors = 0;
        long long curr = 0;
        while(q--){
            cin>>a>>b;
            floors += abs(a - curr);
            floors += abs(b - a);
            curr = b;
        }
        cout<<floors<<endl;        
    }
    return 0;
}