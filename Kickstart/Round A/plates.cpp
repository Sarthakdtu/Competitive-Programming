#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int n, k, p;
        cin>>n>>k>>p;
        int arr[3][k];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++){
                cin>>arr[i][j];
            }
        }

        int sum[3][k];
        for(int i=0;i<n;i++)
        {   
            sum[i][0] = arr[i][0];
            for(int j=1;j<k;j++){
                sum[i][j] = sum[i][j-1] + arr[i][j];
            }
        }
        int ans=0;
        if(n==1){
            ans = sum[0][p-1];
        }
        else if(n==2){
            int sum1=INT_MIN;
            for(int i=0;i<k;i++){
                if(i<=p)
                    ans = max(ans, sum[i][p]);
             for(int j=0;j<k;i++){
                 if((i+j)==p-1){
                     ans = max(ans, sum[i][j]);
                 }
                }   
            }
        }

        cout<<"Case #"<<t<<": "<<ans<<endl;
    }

    return 0;
}