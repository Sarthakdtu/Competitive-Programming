#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        ll sum[n/2+1];
        for(int i=1;i<=n/2;i++){
            sum[i] = arr[i] + arr[n-i+1];
        }

        ll mf=n/2, f=0;
        for(int i=1;i<=n/2;i++){
            ll s = sum[i];
            bool flag = true;
            f = 0;
            for(int j=1;j<=n/2;j++){
                if(i==j)
                    continue;
                else if((s == arr[j] + arr[n-j+1])){
                    continue;
                }
                else if(((s-arr[j]>0 && s-arr[j]<=k) || (s-arr[n-j+1]>0 && s-arr[n-j+1]<=k))){
                    f++;
                    //continue;
                }
                else{
                    f+=2;
                }
            }
            mf = min(f, mf);
        }
        cout<<mf<<endl;
        
    }
    return 0;
}