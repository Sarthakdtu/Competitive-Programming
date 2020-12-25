#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int T=0;T<t;T++){
        ll n;
        cin>>n;
         cout<<"Case #"<<T+1<<": "<<endl;
         
        if(n==501){
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<2<<endl;
            cout<<3<<" "<<2<<endl;
            cout<<4<<" "<<2<<endl;
            cout<<4<<" "<<1<<endl;
            for(int i=1;i<=493;i++){
                cout<<i+4<<" "<<1<<endl;
            }
        }
        else if(n<=500){
            cout<<1<<" "<<1<<endl;
        for(int i=2;i<=n;i++){
                cout<<i<<" "<<1<<endl;
            }
        }
        else{
            ll k = n + 1;
            ll r = log2(k);
            bool rev =false;
            for(int i=1;i<=r;i++){
                if(!rev){
                    for(int j=1;j<=i;j++){
                        cout<<i<<" "<<j<<endl;
                    }
                    rev = true;
                }
                else{
                    for(int j=i;j>0;j--){
                        cout<<i<<" "<<j<<endl;
                    }
                    rev = false;
                }
            }

            k = pow(2, r)-1;
            k = n-k;
            ll j = 1;
        
            if(k>0)
            for(int i=1;i<=k;i++){
                if(rev){
                    j = i+r;
                }
                cout<<i+r<<" "<<j<<endl;
                
            }
        }
    }
    return 0;
}