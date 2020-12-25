#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll x){
    ll sq = sqrt(x);
    for(ll i = 2;i<=sq;i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    ll arr[31] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127};
    while(t--){
        ll  x, k;
        int ans = 0;
        cin>>x>>k;
        if(k==1 && x>0){
            ans = 1;
        }
        else if(k==2){
            if(x<4){
                ans = 0;
            }
            else{
                if(prime(x)){
                    ans = 0;
                }
                else {
                    ans = 1;
                }
            }
        }
        else{
            ll k2 = pow(2,k);
            if(x<k2){
                ans = 0;
            }
            else{
                int count = 0;
                for(int i=0;i<30;i++){
                    ll num = arr[i];
                    while(x>0 && x%num==0){
                        x = x/num;
                        count++;
                    }
                    if(count>=k){
                        ans = 1;
                        break;
                    }
                }
            }
        }

        cout<<ans<<endl;

    }
    return 0;
}