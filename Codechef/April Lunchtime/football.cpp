#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s;
        cin>>s;
        int p[n], ty[n];
        for(int i=0;i<n;i++){
            cin>>p[i];     
        }
        for(int i=0;i<n;i++){
            cin>>ty[i];     
        }
        int f = INT_MAX, d = INT_MAX;
        for(int i=0;i<n;i++){
            if(ty[i]==0){
                d = min(d, p[i]);
            }
            else{
                f = min(f, p[i]);
            }
        }
        
        if(f!=INT_MAX && d!=INT_MAX && s+f+d<=100){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<endl;    
    }
    return 0;
}