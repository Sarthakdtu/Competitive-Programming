#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int ans = 0;
        int n;
        long long d;
        cin>>n>>d;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long poss = 0;
        long long day = d;
        for(int i=n-1;i>-1;i--){
            //day = d/arr[i];
            if(day%arr[i]==0){
                continue;
            }
            else{
                day = (day/arr[i])*arr[i];
            }
        }
        cout<<"Case #"<<t<<": "<<day<<endl;        
    }
    return 0;
}