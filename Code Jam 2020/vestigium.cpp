#include<bits/stdc++.h>
#define forn(i, n) for(int i=0;i<n;i++)
using namespace std;

int main(){
    int T;
    cin>>T;
    forn(t, T){
        int n, r=0, c=0, k=0;
        cin>>n;
        int arr[n][n];
        forn(i, n){
            bool flag = false;
            int rep[n+1] = {0};
            forn(j, n){
                cin>>arr[i][j];
                if(rep[arr[i][j]]==0)
                    rep[arr[i][j]] = 1;
                else if(!flag){
                    r++;
                    flag = true;
                }
                if(i==j){
                    k += arr[i][j];
                }
            }
        }
        forn(j, n){
            int rep[n+1] = {0};
            //bool flag = false;
            forn(i, n){
                if(rep[arr[i][j]] == 0)
                    rep[arr[i][j]] = 1;
                else{
                    c++;
                    break;
                    //flag = true;
                }
            }
        }
        cout<<"Case #"<<t+1<<": "<<k<<" "<<r<<" "<<c<<endl;

    }
    return 0;
}