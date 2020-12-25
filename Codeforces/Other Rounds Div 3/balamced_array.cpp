#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n+1];
        for(ll i=1;i<=n/2;i++){
            arr[i] = i*2;
        }
        for(int i=1;i<n/2;i++){
            arr[i+n/2] = 2*i - 1;
        }
        ll x = n/2 - 1 + n; 
        if(x%2 == 0){
            cout<<"NO";
        }
        else{
            arr[n] = x;
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++)
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}