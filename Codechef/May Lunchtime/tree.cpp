#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    int t;
    cin>>t;
    while(t--){
       int n, q;
       cin>>n>>q;
       int a[n+1];
       for(int i=0;i<n;i++)
        cin>>a[i+1];
        bool mat[n+1][n+1];
        memset(mat, false, sizeof(mat));
        vector<vector<int> > e;
        for(int i=0;i<n-1;i++){
            int s, d;
            cin>>s>>d;
            e[s].push_back(d);
            e[d].push_back(s);
            mat[s][d] = true; 
            mat[d][s] = true;
        }
        for(int i=0;i<q;i++){
            int s, d;
            cin>>s>>d;
            if(mat[s][d]){
                cout<<abs(a[s] - a[d])<<endl;
                continue;
            }
            else{

            }
        }

    }

    return 0;

}