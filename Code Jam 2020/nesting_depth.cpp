#include<bits/stdc++.h>
#define forn(i, n) for(int i=0;i<n;i++)
using namespace std;

int main(){
    int T;
    cin>>T;
    forn(t, T){
        string s, ans="";
        cin>>s;
        int open=0, close=0;
        forn(i, s.size()){
            int num = s[i] - '0'; 
            if(open>num){
                int new_open = open;
                forn(k, open-num){
                    ans = ans +")";
                    new_open --;
                }
                open = new_open;
                ans += s[i];
            }
            else{
                int new_open=open;
                forn(k, num-open){
                    ans = ans + "(";
                    new_open++;
                }
                open = new_open;
                ans += s[i];
            }
        } 
        forn(i, open){
            ans += ")";
        }
        cout<<"Case #"<<t+1<<": "<<ans<<endl;

        
    }
    return 0;
}