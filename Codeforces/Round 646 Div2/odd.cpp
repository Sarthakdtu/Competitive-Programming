#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int sum = 0;
        int arr[n];
        int numo = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]&1)
                numo++;
        }
        if(numo==0){
            cout<<"No"<<endl;
            continue;
        }
        int nume = n - numo;
        if(x&1){
            if(numo>=x)
            cout<<"Yes"<<endl;
            //continue;
        }
        else{
            if(nume==0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
         
    }

    return 0;
}