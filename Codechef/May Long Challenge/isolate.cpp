#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        ll f[26] = {0};
        for(int i=0;i<s.size();i++){
            f[s[i] - 'a']++;
        }

        while(q--){
            ll c;
            cin>>c;
            ll p = 0;
            for(int i=0;i<26;i++){
                if(f[i]>c){
                    p += (f[i] - c);
                }
            }
            cout<<p<<endl;
        }
    }
    return 0;
}