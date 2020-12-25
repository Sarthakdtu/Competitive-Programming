#include<bits/stdc++.h>
using namespace std;


int main(){

    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int ans = 0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int peak = 0;
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                peak++;
            }
        }


        cout<<"Case #"<<t<<": "<<peak<<endl;
    }

    return 0;
}