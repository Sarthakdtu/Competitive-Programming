#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int me=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            me = max(me, arr[i]);
        }
        int dp[me+1][n];
        memset(dp, 0, sizeof(dp));
        //cout<<"?";
        int max1[me+1] = {0};
        for(int i=0;i<n;i++){
                int row = arr[i];
                dp[row][i] = 1;
                for(int j=0;j<i-1;j++){
                    if(arr[j] != row)
                        continue;
                    dp[row][i] = max(dp[row][j]+1, dp[row][i]);
                }
                if(i-1>-1){
                    dp[row][i] = max(dp[row][i], dp[row][i-1]);
                }
                max1[row] = max(max1[row], dp[row][i]);
            }

        int maxr = 0;int row = 0;
        for(int i=1;i<me+1;i++){
            if(maxr<max1[i]){
                maxr = max1[i];
                row = i;
            }  
        }
        cout<<row;
        cout<<endl;

    }
    return 0;
}