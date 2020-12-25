#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        if(m==0){
            cout<<0<<endl;
            continue;
        }
        int mj =min(m, n/k);
        m = m - mj;
        if(m==0){
            cout<<mj<<endl;
            continue;
        }
        

        int mp = m/(k-1);
        int rm = m%(k-1);
        if(rm>0)
            mp++;
        cout<<mj-mp<<endl;



    }
    return 0;
}