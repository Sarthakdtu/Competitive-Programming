#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll m = (1000)*(1000)*(1000) + 7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int peak[n]={0};
        for(int i=0;i<n-2;i++){
            if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
                peak[i] = 1;
            }
        //cout<<peak[i]<<" ";
        }
        //cout<<endl;

        ll dp[n] = {0};
        k -=2;
        for(int i=0;i<k;i++){
            if(peak[i]==1)
                dp[0]++;
        }


        for(int i=1;i<n-k;i++){
            dp[i] = dp[i-1];
            if(peak[i-1]==1)
                dp[i]--;
            if(dp[i]<0)
                dp[i]=0;
            if(peak[i+k-1]==1)
                dp[i]++;
            
        }
        ll max1=0, idx=1;

        for(int i=0;i<n;i++){
          //  cout<<dp[i]<<" ";
            if(dp[i]>max1){
                idx = i+1;
                max1 = dp[i];
            }
        }
        //cout<<endl;
        
        cout<<max1+1<<" "<<idx<<endl;

    }
    return 0;
}