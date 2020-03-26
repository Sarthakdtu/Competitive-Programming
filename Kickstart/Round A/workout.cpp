#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n, k;
        cin>>n>>k;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ans=0;
        int pref[n];
        int diff = 0, idx;
        
        for(int i=1;i<n;i++){
            pref[i] = arr[i]-arr[i-1];
            if(diff<pref[i]){
                diff = pref[i];
                idx = i;
            }
        }
        if(diff==1){
            ans = 1;
        }
        else{
            pref[idx] = diff/2;
            if(diff%2==1)
                pref[idx]++;
            diff = 0;
            for(int i=1;i<n;i++)
                diff = max(diff, pref[i]);
            ans = diff;
        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }

    return 0;
}