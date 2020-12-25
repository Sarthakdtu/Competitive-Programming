#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll m = 1000000007;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        ll ans =0;
        ll year =0;
        sort(arr, arr+n);
        for(int i=n-1;i>-1;i--){
            //if(arr[i])
            arr[i] = arr[i] + year;
            if(arr[i]<0)
                arr[i] = 0;
            //cout<<arr[i]<<" ";
            ans = (ans%m + arr[i]%m)%m;
            year--;
        }
        cout<<ans<<endl;

    }
    return 0;
}