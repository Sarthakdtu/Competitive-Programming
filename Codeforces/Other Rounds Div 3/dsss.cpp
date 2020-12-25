#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<int, int> compmax(pair<int, int> a, pair<int, int> b){
    if(a.first>b.first)
        return a;
}
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

        pair<int,int> maxp[n/2+1];
        pair<int,int> minp[n/2+1];
        for(int i=1;i<=n/2;i++){
            maxp[i].first = max(arr[i], arr[n-i+1]);
            maxp[i].second = min(arr[i], arr[n-i+1]);
            //minp[i] = min(arr[i], arr[n-i+1]);
            minp[i] = maxp[i];
        }

        sort(maxp, maxp+n/2+1, compmax);
        sort(minp, minp+n/2+1,compmin);

        
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