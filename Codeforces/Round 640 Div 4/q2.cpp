#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        if(n<k){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==k){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<1<<" ";
            cout<<endl;
            continue;
        }

        // if(n%k==0){
        //     ll fact = n/k;
        //     for(int i=0;i<k;i++)
        //         cout<<fact<<" ";
        //     cout<<endl;
        //     continue;
        // }

        ll rem = n - (k-1);
        if(rem>0 && rem&1){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)
                cout<<1<<" ";
            cout<<rem<<endl;
            continue;
        }
        
        rem = n - 2*(k-1);
        if(rem>0 && rem%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)
                cout<<2<<" ";
            cout<<rem<<endl;
            continue;
        }

        cout<<"NO"<<endl;

        // ll nmodk = n%k;
        // ll nbyk = n/k;
        // if(nbyk&1){
        //     if(nmodk&1){
        //         if(n&1)
        //             cout<<"NO"<<endl;       
                           
        //     }
        //     else{
        //         cout<<"YES"<<endl;
        //         for(int i=0;i<k-1;i++){
        //             cout<<nbyk<<" ";
        //         }
        //         cout<<(nbyk + nmodk)<<endl;
        //         continue;
        //     }
        // }
        // else{
        //     if(nmodk&1){
                
        //     }
        //     else{
        //         cout<<"YES"<<endl;
        //         for(int i=0;i<k-1;i++){
        //             cout<<nbyk<<" ";
        //         }
        //         cout<<(nbyk + nmodk)<<endl;
        //         continue;
        //     }
        // }



    }


    return 0;
}