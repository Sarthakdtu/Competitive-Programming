#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){

        ll n, k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                ll num = k;
                //i++;
                bool flag = true;
                while(i<n){
                    if(arr[i]==num){
                       // cout<<num;
                        num--;
                        if(num==0){
                            break;
                        }
                        i++;
                    }
                    else{
                        flag = false;
                        i--;
                        break;
                    }
                }
                if(flag && num==0){
                    ans++;
                }
            }
        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }


    return 0;
}