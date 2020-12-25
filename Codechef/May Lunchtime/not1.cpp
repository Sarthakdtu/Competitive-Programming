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
        bool flag = true;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)
                flag = false;
        }

        if(flag){
            cout<<0<<endl;
            continue;
        }
        
        



    }

    return 0;

}