#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n=5, p;
        int arr[n];
        bool flag = true;
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i]; 
        }
        cin>>p;
        sum *= p;
        ll hrs = 24*5;
        sum = sum - hrs;
        if(sum<=0){
            cout<<"No";
        }
        else{
            cout<<"Yes";
        }
        cout<<endl;


    }

    return 0;

}