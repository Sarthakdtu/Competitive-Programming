#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n], b[n];
       for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        
        ll side = 0;
        ll pa=0, pb=0;
        for(int i=0;i<n;i++){
            if(pa==pb && a[i]==b[i]){
                side += a[i];
            }
           pa += a[i];
           pb += b[i];
        }

        cout<<side<<endl;
        


    }

    return 0;

}