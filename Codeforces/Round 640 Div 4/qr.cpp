#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        

        ll rem = k/(n-1);
        ll mo = k%(n-1);
        ll ans = rem*n + mo;
        if(mo==0)
            ans--;
        //cout<<"ansewe";
        cout<<ans<<endl;
        
    }   

    return 0;

}