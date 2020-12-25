#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sum = 0;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool pos = true;
        if(arr[0]<0){
            pos = false;
        }
        ll curr = 0;
        for(int i=0;i<n;i++){
            if(pos && arr[i]>0 ){
                sum += arr[i];
                curr  = arr[i];
                pos = !pos;
            }
            else if(!pos && arr[i]>0){
                if(arr[i] > curr && curr!=0){
                    sum -= curr;
                    sum += arr[i];
                    curr = arr[i];
                }
            }
            else if(!pos && arr[i]<0){
                sum += arr[i];
                curr  = arr[i];
                pos = !pos;
            }
            else if(pos && arr[i]<0){
                if(arr[i]>curr && curr!=0){
                     sum -= curr;
                    sum += arr[i];
                    curr = arr[i];
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}