#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)    
            cin>>arr[i];
        sort(arr, arr+n);
        int ans = INT_MAX;
        for(int i=0;i<n-1;i++) {
            ans = min(ans, abs(arr[i]-arr[i+1]));
        }
        cout<<ans<<endl;

        
    



    }


    return 0;
}